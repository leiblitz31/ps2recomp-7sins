#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033AEC0
// Address: 0x33aec0 - 0x33b1d0
void sub_0033AEC0_0x33aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AEC0_0x33aec0");
#endif

    ctx->pc = 0x33aec0u;

    // 0x33aec0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x33aec0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aec4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x33aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x33aec8: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x33aec8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x33aecc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x33aeccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aed0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x33aed0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x33aed4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x33aed4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aed8: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x33aed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x33aedc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33AEDCu;
    {
        const bool branch_taken_0x33aedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AEDCu;
        // 0x33aee0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aedc) {
            ctx->pc = 0x33AEF4u;
            goto label_33aef4;
        }
    }
    ctx->pc = 0x33AEE4u;
    // 0x33aee4: 0xad280004  sw          $t0, 0x4($t1)
    ctx->pc = 0x33aee4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 8));
    // 0x33aee8: 0x240200ac  addiu       $v0, $zero, 0xAC
    ctx->pc = 0x33aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x33aeec: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x33aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x33aef0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x33aef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33aef4:
    // 0x33aef4: 0x31420002  andi        $v0, $t2, 0x2
    ctx->pc = 0x33aef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)2);
    // 0x33aef8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AEF8u;
    {
        const bool branch_taken_0x33aef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AEF8u;
        // 0x33aefc: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aef8) {
            ctx->pc = 0x33AF1Cu;
            goto label_33af1c;
        }
    }
    ctx->pc = 0x33AF00u;
    // 0x33af00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33af00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33af04: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x33af04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33af08: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x33af08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33af0c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33af10: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33af10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33af14: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33af14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33af18: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33af18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33af1c:
    // 0x33af1c: 0x31420004  andi        $v0, $t2, 0x4
    ctx->pc = 0x33af1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4);
    // 0x33af20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AF20u;
    {
        const bool branch_taken_0x33af20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF20u;
        // 0x33af24: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af20) {
            ctx->pc = 0x33AF44u;
            goto label_33af44;
        }
    }
    ctx->pc = 0x33AF28u;
    // 0x33af28: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33af28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33af2c: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x33af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33af30: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x33af30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33af34: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33af34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33af38: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33af38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33af3c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33af40: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33af40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33af44:
    // 0x33af44: 0x31420020  andi        $v0, $t2, 0x20
    ctx->pc = 0x33af44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)32);
    // 0x33af48: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AF48u;
    {
        const bool branch_taken_0x33af48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF48u;
        // 0x33af4c: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af48) {
            ctx->pc = 0x33AF6Cu;
            goto label_33af6c;
        }
    }
    ctx->pc = 0x33AF50u;
    // 0x33af50: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x33af50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33af54: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x33af54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33af58: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x33af58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x33af5c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33af60: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33af60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33af64: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33af64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33af68: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33af68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33af6c:
    // 0x33af6c: 0x31420040  andi        $v0, $t2, 0x40
    ctx->pc = 0x33af6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)64);
    // 0x33af70: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AF70u;
    {
        const bool branch_taken_0x33af70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF70u;
        // 0x33af74: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af70) {
            ctx->pc = 0x33AF94u;
            goto label_33af94;
        }
    }
    ctx->pc = 0x33AF78u;
    // 0x33af78: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x33af78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33af7c: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x33af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33af80: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x33af80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33af84: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33af84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33af88: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33af88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33af8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33af8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33af90: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33af90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33af94:
    // 0x33af94: 0x31420010  andi        $v0, $t2, 0x10
    ctx->pc = 0x33af94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)16);
    // 0x33af98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AF98u;
    {
        const bool branch_taken_0x33af98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF98u;
        // 0x33af9c: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af98) {
            ctx->pc = 0x33AFBCu;
            goto label_33afbc;
        }
    }
    ctx->pc = 0x33AFA0u;
    // 0x33afa0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x33afa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33afa4: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x33afa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33afa8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33afac: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33afacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33afb0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33afb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33afb4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33afb8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33afb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33afbc:
    // 0x33afbc: 0x31420008  andi        $v0, $t2, 0x8
    ctx->pc = 0x33afbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)8);
    // 0x33afc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AFC0u;
    {
        const bool branch_taken_0x33afc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AFC0u;
        // 0x33afc4: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33afc0) {
            ctx->pc = 0x33AFE4u;
            goto label_33afe4;
        }
    }
    ctx->pc = 0x33AFC8u;
    // 0x33afc8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x33afc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33afcc: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x33afccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33afd0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x33afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33afd4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33afd8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33afdc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33afe0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33afe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33afe4:
    // 0x33afe4: 0x31420100  andi        $v0, $t2, 0x100
    ctx->pc = 0x33afe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)256);
    // 0x33afe8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33AFE8u;
    {
        const bool branch_taken_0x33afe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AFE8u;
        // 0x33afec: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33afe8) {
            ctx->pc = 0x33B010u;
            goto label_33b010;
        }
    }
    ctx->pc = 0x33AFF0u;
    // 0x33aff0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33aff4: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x33aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33aff8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x33aff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x33affc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33affcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x33b000: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33b000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33b004: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x33b004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x33b008: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33b008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33b00c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_33b010:
    // 0x33b010: 0x31420200  andi        $v0, $t2, 0x200
    ctx->pc = 0x33b010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)512);
    // 0x33b014: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33B014u;
    {
        const bool branch_taken_0x33b014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B014u;
        // 0x33b018: 0x82080  sll         $a0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b014) {
            ctx->pc = 0x33B048u;
            goto label_33b048;
        }
    }
    ctx->pc = 0x33B01Cu;
    // 0x33b01c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33b020: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x33b020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x33b024: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x33b024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x33b028: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b02c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x33b02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x33b030: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x33b030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33b034: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33b034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33b038: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x33b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x33b03c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x33b03cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33b040: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x33b040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x33b044: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33b044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_33b048:
    // 0x33b048: 0x31420400  andi        $v0, $t2, 0x400
    ctx->pc = 0x33b048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1024);
    // 0x33b04c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33B04Cu;
    {
        const bool branch_taken_0x33b04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B04Cu;
        // 0x33b050: 0x82080  sll         $a0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b04c) {
            ctx->pc = 0x33B080u;
            goto label_33b080;
        }
    }
    ctx->pc = 0x33B054u;
    // 0x33b054: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33b054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33b058: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x33b058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x33b05c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x33b05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x33b060: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b064: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x33b064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x33b068: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x33b068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33b06c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33b06cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33b070: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x33b070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x33b074: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x33b074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33b078: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x33b078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x33b07c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_33b080:
    // 0x33b080: 0x31420800  andi        $v0, $t2, 0x800
    ctx->pc = 0x33b080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)2048);
    // 0x33b084: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33B084u;
    {
        const bool branch_taken_0x33b084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B084u;
        // 0x33b088: 0x82080  sll         $a0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b084) {
            ctx->pc = 0x33B0B8u;
            goto label_33b0b8;
        }
    }
    ctx->pc = 0x33B08Cu;
    // 0x33b08c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33b090: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x33b090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x33b094: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x33b094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x33b098: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b09c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x33b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x33b0a0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x33b0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33b0a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33b0a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33b0a8: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x33b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x33b0ac: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x33b0acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33b0b0: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x33b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x33b0b4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33b0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_33b0b8:
    // 0x33b0b8: 0x31421000  andi        $v0, $t2, 0x1000
    ctx->pc = 0x33b0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4096);
    // 0x33b0bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33B0BCu;
    {
        const bool branch_taken_0x33b0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B0BCu;
        // 0x33b0c0: 0x82080  sll         $a0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b0bc) {
            ctx->pc = 0x33B0F0u;
            goto label_33b0f0;
        }
    }
    ctx->pc = 0x33B0C4u;
    // 0x33b0c4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33b0c8: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x33b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x33b0cc: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x33b0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x33b0d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b0d4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x33b0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33b0d8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x33b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33b0dc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33b0dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33b0e0: 0x8d62000c  lw          $v0, 0xC($t3)
    ctx->pc = 0x33b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x33b0e4: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x33b0e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33b0e8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x33b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x33b0ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33b0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_33b0f0:
    // 0x33b0f0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x33b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x33b0f4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x33b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x33b0f8: 0x1422024  and         $a0, $t2, $v0
    ctx->pc = 0x33b0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x33b0fc: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x33B0FCu;
    {
        const bool branch_taken_0x33b0fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B0FCu;
        // 0x33b100: 0x64102a  slt         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b0fc) {
            ctx->pc = 0x33B128u;
            goto label_33b128;
        }
    }
    ctx->pc = 0x33B104u;
    // 0x33b104: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x33B104u;
    {
        const bool branch_taken_0x33b104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B104u;
        // 0x33b108: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b104) {
            ctx->pc = 0x33B1C0u;
            goto label_33b1c0;
        }
    }
    ctx->pc = 0x33B10Cu;
    // 0x33b10c: 0x5082001c  beql        $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x33B10Cu;
    {
        const bool branch_taken_0x33b10c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x33b10c) {
            ctx->pc = 0x33B110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B10Cu;
            // 0x33b110: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B180u;
            goto label_33b180;
        }
    }
    ctx->pc = 0x33B114u;
    // 0x33b114: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x33b114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x33b118: 0x10820020  beq         $a0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x33B118u;
    {
        const bool branch_taken_0x33b118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x33B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B118u;
        // 0x33b11c: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b118) {
            ctx->pc = 0x33B19Cu;
            goto label_33b19c;
        }
    }
    ctx->pc = 0x33B120u;
    // 0x33b120: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x33B120u;
    {
        const bool branch_taken_0x33b120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b120) {
            ctx->pc = 0x33B1C4u;
            goto label_33b1c4;
        }
    }
    ctx->pc = 0x33B128u;
label_33b128:
    // 0x33b128: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x33b128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x33b12c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x33b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x33b130: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x33b130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33b134: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x33b134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x33b138: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x33b138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x33b13c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x33b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33b140: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33b140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x33b144: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x33b144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x33b148: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x33b148u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x33b14c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b150: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x33b150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x33b154: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x33b154u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33b158: 0x24470018  addiu       $a3, $v0, 0x18
    ctx->pc = 0x33b158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x33b15c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x33b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x33b160: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x33b160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x33b164: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x33B164u;
    {
        const bool branch_taken_0x33b164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x33B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B164u;
        // 0x33b168: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b164) {
            ctx->pc = 0x33B1C0u;
            goto label_33b1c0;
        }
    }
    ctx->pc = 0x33B16Cu;
    // 0x33b16c: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x33b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x33b170: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x33b170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33b174: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x33b174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x33b178: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x33B178u;
    {
        const bool branch_taken_0x33b178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B178u;
        // 0x33b17c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b178) {
            ctx->pc = 0x33B1C0u;
            goto label_33b1c0;
        }
    }
    ctx->pc = 0x33B180u;
label_33b180:
    // 0x33b180: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33b180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33b184: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x33b184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33b188: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x33b188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x33b18c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33b18cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x33b190: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33b190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33b194: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33B194u;
    {
        const bool branch_taken_0x33b194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B194u;
        // 0x33b198: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b194) {
            ctx->pc = 0x33B1B8u;
            goto label_33b1b8;
        }
    }
    ctx->pc = 0x33B19Cu;
label_33b19c:
    // 0x33b19c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x33b19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x33b1a0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33b1a4: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x33b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33b1a8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x33b1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x33b1ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33b1acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x33b1b0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33b1b4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x33b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33b1b8:
    // 0x33b1b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33b1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33b1bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_33b1c0:
    // 0x33b1c0: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x33b1c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_33b1c4:
    // 0x33b1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x33B1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B1CCu;
    // 0x33b1cc: 0x0  nop
    ctx->pc = 0x33b1ccu;
    // NOP
    ctx->pc = 0x33b1d0u;
}
