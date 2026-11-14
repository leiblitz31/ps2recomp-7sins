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

// Function: sub_002EECE0
// Address: 0x2eece0 - 0x2eee78
void sub_002EECE0_0x2eece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EECE0_0x2eece0");
#endif

    switch (ctx->pc) {
        case 0x2eed20u: goto label_2eed20;
        default: break;
    }

    ctx->pc = 0x2eece0u;

    // 0x2eece0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2eece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2eece4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eece8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2eece8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eecec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2eececu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2eecf0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2eecf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2eecf4: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x2eecf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2eecf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eecf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2eecfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2eecfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2eed00: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2eed00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2eed04: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2eed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2eed08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eed08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eed0c: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x2eed0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2eed10: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x2eed10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x2eed14: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x2eed14u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2eed18: 0xc0bb90e  jal         func_2EE438
    ctx->pc = 0x2EED18u;
    SET_GPR_U32(ctx, 31, 0x2EED20u);
    ctx->pc = 0x2EED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED18u;
    // 0x2eed1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE438u, 0x2EED18u, 0x2EED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED20u;
label_2eed20:
    // 0x2eed20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2eed20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed24: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2eed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2eed28: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2eed28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2eed2c: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x2eed2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2eed30: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EED30u;
    {
        const bool branch_taken_0x2eed30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED30u;
        // 0x2eed34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed30) {
            ctx->pc = 0x2EEDA0u;
            goto label_2eeda0;
        }
    }
    ctx->pc = 0x2EED38u;
    // 0x2eed38: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2eed38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2eed3c: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x2eed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x2eed40: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2eed40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2eed44: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2eed44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2eed48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2eed48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2eed4c: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x2eed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x2eed50: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x2eed50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x2eed54: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2eed54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2eed58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eed58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2eed5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eed60: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x2eed60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2eed64: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EED64u;
    {
        const bool branch_taken_0x2eed64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED64u;
        // 0x2eed68: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed64) {
            ctx->pc = 0x2EED70u;
            goto label_2eed70;
        }
    }
    ctx->pc = 0x2EED6Cu;
    // 0x2eed6c: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x2eed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_2eed70:
    // 0x2eed70: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2eed70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2eed74: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x2eed74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x2eed78: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2eed78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2eed7c: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x2eed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x2eed80: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x2eed80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2eed84: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2eed84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eed88: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2eed88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2eed8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2eed8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2eed90: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x2eed90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x2eed94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2eed94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2eed98: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2EED98u;
    {
        const bool branch_taken_0x2eed98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED98u;
        // 0x2eed9c: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed98) {
            ctx->pc = 0x2EEE50u;
            goto label_2eee50;
        }
    }
    ctx->pc = 0x2EEDA0u;
label_2eeda0:
    // 0x2eeda0: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x2eeda0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2eeda4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEDA4u;
    {
        const bool branch_taken_0x2eeda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eeda4) {
            ctx->pc = 0x2EEDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEDA4u;
            // 0x2eeda8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEDB4u;
            goto label_2eedb4;
        }
    }
    ctx->pc = 0x2EEDACu;
    // 0x2eedac: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x2eedacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x2eedb0: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2eedb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2eedb4:
    // 0x2eedb4: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x2eedb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x2eedb8: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EEDB8u;
    {
        const bool branch_taken_0x2eedb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDB8u;
        // 0x2eedbc: 0x61823  negu        $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eedb8) {
            ctx->pc = 0x2EEE20u;
            goto label_2eee20;
        }
    }
    ctx->pc = 0x2EEDC0u;
    // 0x2eedc0: 0xd31004  sllv        $v0, $s3, $a2
    ctx->pc = 0x2eedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x2eedc4: 0x671806  srlv        $v1, $a3, $v1
    ctx->pc = 0x2eedc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x2eedc8: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x2eedc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x2eedcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eedccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2eedd0: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x2eedd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2eedd4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2eedd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2eedd8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2eedd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2eeddc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2eeddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2eede0: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x2eede0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x2eede4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2eede4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eede8: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2eede8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2eedec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EEDECu;
    {
        const bool branch_taken_0x2eedec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDECu;
        // 0x2eedf0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eedec) {
            ctx->pc = 0x2EEDF8u;
            goto label_2eedf8;
        }
    }
    ctx->pc = 0x2EEDF4u;
    // 0x2eedf4: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x2eedf4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_2eedf8:
    // 0x2eedf8: 0x61023  negu        $v0, $a2
    ctx->pc = 0x2eedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x2eedfc: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x2eedfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x2eee00: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x2eee00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x2eee04: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2eee04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eee08: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2eee08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2eee0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2eee0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2eee10: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x2eee10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x2eee14: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2eee14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2eee18: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EEE18u;
    {
        const bool branch_taken_0x2eee18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE18u;
        // 0x2eee1c: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee18) {
            ctx->pc = 0x2EEE50u;
            goto label_2eee50;
        }
    }
    ctx->pc = 0x2EEE20u;
label_2eee20:
    // 0x2eee20: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x2eee20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x2eee24: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2eee24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2eee28: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2eee28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2eee2c: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2eee2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x2eee30: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x2eee30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x2eee34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2eee34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eee38: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2eee38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eee3c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2eee3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2eee40: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x2eee40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2eee44: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2eee44u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2eee48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2eee48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2eee4c: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x2eee4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_2eee50:
    // 0x2eee50: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x2eee50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x2eee54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2eee54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eee58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eee5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eee5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eee60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2eee60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eee64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2eee64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eee68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2eee68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eee6c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2eee6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2eee70: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE70u;
        // 0x2eee74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEE78u;
}
