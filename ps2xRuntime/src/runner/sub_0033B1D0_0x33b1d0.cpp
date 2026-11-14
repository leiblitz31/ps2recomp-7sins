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

// Function: sub_0033B1D0
// Address: 0x33b1d0 - 0x33b418
void sub_0033B1D0_0x33b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B1D0_0x33b1d0");
#endif

    ctx->pc = 0x33b1d0u;

    // 0x33b1d0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x33b1d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b1d4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x33b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33b1d8: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x33b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x33b1dc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x33b1dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b1e0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x33b1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x33b1e4: 0x31420040  andi        $v0, $t2, 0x40
    ctx->pc = 0x33b1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)64);
    // 0x33b1e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33B1E8u;
    {
        const bool branch_taken_0x33b1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B1E8u;
        // 0x33b1ec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b1e8) {
            ctx->pc = 0x33B204u;
            goto label_33b204;
        }
    }
    ctx->pc = 0x33B1F0u;
    // 0x33b1f0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x33b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33b1f4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x33b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x33b1f8: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x33b1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x33b1fc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x33b1fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33b200: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x33b200u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_33b204:
    // 0x33b204: 0x31420002  andi        $v0, $t2, 0x2
    ctx->pc = 0x33b204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)2);
    // 0x33b208: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33B208u;
    {
        const bool branch_taken_0x33b208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B208u;
        // 0x33b20c: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b208) {
            ctx->pc = 0x33B22Cu;
            goto label_33b22c;
        }
    }
    ctx->pc = 0x33B210u;
    // 0x33b210: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33b210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b214: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x33b214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33b218: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x33b218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x33b21c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33b220: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33b220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33b224: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b228: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33b228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33b22c:
    // 0x33b22c: 0x31420004  andi        $v0, $t2, 0x4
    ctx->pc = 0x33b22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4);
    // 0x33b230: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33B230u;
    {
        const bool branch_taken_0x33b230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B230u;
        // 0x33b234: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b230) {
            ctx->pc = 0x33B254u;
            goto label_33b254;
        }
    }
    ctx->pc = 0x33B238u;
    // 0x33b238: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33b238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33b23c: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x33b23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33b240: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33b240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33b244: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33b244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33b248: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33b248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33b24c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b24cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b250: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33b250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33b254:
    // 0x33b254: 0x31420008  andi        $v0, $t2, 0x8
    ctx->pc = 0x33b254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)8);
    // 0x33b258: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33B258u;
    {
        const bool branch_taken_0x33b258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B258u;
        // 0x33b25c: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b258) {
            ctx->pc = 0x33B27Cu;
            goto label_33b27c;
        }
    }
    ctx->pc = 0x33B260u;
    // 0x33b260: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33b260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33b264: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x33b264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33b268: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33b268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33b26c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33b270: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33b270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33b274: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b278: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33b278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33b27c:
    // 0x33b27c: 0x31420080  andi        $v0, $t2, 0x80
    ctx->pc = 0x33b27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)128);
    // 0x33b280: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33B280u;
    {
        const bool branch_taken_0x33b280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B280u;
        // 0x33b284: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b280) {
            ctx->pc = 0x33B2A4u;
            goto label_33b2a4;
        }
    }
    ctx->pc = 0x33B288u;
    // 0x33b288: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x33b288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33b28c: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x33b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33b290: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x33b290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33b294: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33b294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33b298: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33b298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33b29c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b29cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b2a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33b2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33b2a4:
    // 0x33b2a4: 0x31420020  andi        $v0, $t2, 0x20
    ctx->pc = 0x33b2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)32);
    // 0x33b2a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33B2A8u;
    {
        const bool branch_taken_0x33b2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B2A8u;
        // 0x33b2ac: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b2a8) {
            ctx->pc = 0x33B2CCu;
            goto label_33b2cc;
        }
    }
    ctx->pc = 0x33B2B0u;
    // 0x33b2b0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x33b2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33b2b4: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x33b2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33b2b8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33b2bc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33b2c0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33b2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33b2c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b2c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33b2c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33b2cc:
    // 0x33b2cc: 0x31420010  andi        $v0, $t2, 0x10
    ctx->pc = 0x33b2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)16);
    // 0x33b2d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33B2D0u;
    {
        const bool branch_taken_0x33b2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B2D0u;
        // 0x33b2d4: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b2d0) {
            ctx->pc = 0x33B2F4u;
            goto label_33b2f4;
        }
    }
    ctx->pc = 0x33B2D8u;
    // 0x33b2d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x33b2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33b2dc: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x33b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33b2e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x33b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33b2e4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33b2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33b2e8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33b2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33b2ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b2f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33b2f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33b2f4:
    // 0x33b2f4: 0x31420100  andi        $v0, $t2, 0x100
    ctx->pc = 0x33b2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)256);
    // 0x33b2f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33B2F8u;
    {
        const bool branch_taken_0x33b2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B2F8u;
        // 0x33b2fc: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b2f8) {
            ctx->pc = 0x33B320u;
            goto label_33b320;
        }
    }
    ctx->pc = 0x33B300u;
    // 0x33b300: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33b300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33b304: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x33b304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33b308: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x33b308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x33b30c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33b30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x33b310: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33b310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33b314: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x33b314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33b318: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33b318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33b31c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b31cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_33b320:
    // 0x33b320: 0x31420200  andi        $v0, $t2, 0x200
    ctx->pc = 0x33b320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)512);
    // 0x33b324: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33B324u;
    {
        const bool branch_taken_0x33b324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B324u;
        // 0x33b328: 0x82080  sll         $a0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b324) {
            ctx->pc = 0x33B35Cu;
            goto label_33b35c;
        }
    }
    ctx->pc = 0x33B32Cu;
    // 0x33b32c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33b330: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x33b330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x33b334: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x33b334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x33b338: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b33c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x33b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33b340: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33b340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33b344: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x33b344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x33b348: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x33b348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x33b34c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33b350: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x33b350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x33b354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33b354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33b358: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33b358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_33b35c:
    // 0x33b35c: 0x31420400  andi        $v0, $t2, 0x400
    ctx->pc = 0x33b35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1024);
    // 0x33b360: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33B360u;
    {
        const bool branch_taken_0x33b360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B360u;
        // 0x33b364: 0x82080  sll         $a0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b360) {
            ctx->pc = 0x33B398u;
            goto label_33b398;
        }
    }
    ctx->pc = 0x33B368u;
    // 0x33b368: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33b368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33b36c: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x33b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x33b370: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x33b370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x33b374: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b378: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x33b378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33b37c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33b37cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33b380: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x33b380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x33b384: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x33b384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x33b388: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33b388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33b38c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x33b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x33b390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33b390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33b394: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33b394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_33b398:
    // 0x33b398: 0x31420800  andi        $v0, $t2, 0x800
    ctx->pc = 0x33b398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)2048);
    // 0x33b39c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33B39Cu;
    {
        const bool branch_taken_0x33b39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B39Cu;
        // 0x33b3a0: 0x82080  sll         $a0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b39c) {
            ctx->pc = 0x33B3D4u;
            goto label_33b3d4;
        }
    }
    ctx->pc = 0x33B3A4u;
    // 0x33b3a4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33b3a8: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x33b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x33b3ac: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x33b3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x33b3b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b3b4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x33b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33b3b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33b3b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33b3bc: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x33b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x33b3c0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33b3c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33b3c8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x33b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x33b3cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33b3d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33b3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_33b3d4:
    // 0x33b3d4: 0x31421000  andi        $v0, $t2, 0x1000
    ctx->pc = 0x33b3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4096);
    // 0x33b3d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33B3D8u;
    {
        const bool branch_taken_0x33b3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B3D8u;
        // 0x33b3dc: 0x82080  sll         $a0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b3d8) {
            ctx->pc = 0x33B410u;
            goto label_33b410;
        }
    }
    ctx->pc = 0x33B3E0u;
    // 0x33b3e0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33b3e4: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x33b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x33b3e8: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x33b3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x33b3ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b3f0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x33b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33b3f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33b3f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33b3f8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x33b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x33b3fc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33b400: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33b400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33b404: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x33b404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x33b408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33b408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33b40c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33b40cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_33b410:
    // 0x33b410: 0x3e00008  jr          $ra
    ctx->pc = 0x33B410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B410u;
        // 0x33b414: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B418u;
}
