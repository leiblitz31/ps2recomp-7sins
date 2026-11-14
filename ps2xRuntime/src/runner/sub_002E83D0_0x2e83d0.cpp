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

// Function: sub_002E83D0
// Address: 0x2e83d0 - 0x2e8650
void sub_002E83D0_0x2e83d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E83D0_0x2e83d0");
#endif

    switch (ctx->pc) {
        case 0x2e8420u: goto label_2e8420;
        case 0x2e8438u: goto label_2e8438;
        case 0x2e8468u: goto label_2e8468;
        case 0x2e84fcu: goto label_2e84fc;
        case 0x2e8570u: goto label_2e8570;
        case 0x2e8580u: goto label_2e8580;
        case 0x2e85a0u: goto label_2e85a0;
        case 0x2e85f0u: goto label_2e85f0;
        default: break;
    }

    ctx->pc = 0x2e83d0u;

    // 0x2e83d0: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x2e83d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
    // 0x2e83d4: 0x10a00054  beqz        $a1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2E83D4u;
    {
        const bool branch_taken_0x2e83d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E83D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83D4u;
        // 0x2e83d8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83d4) {
            ctx->pc = 0x2E8528u;
            goto label_2e8528;
        }
    }
    ctx->pc = 0x2E83DCu;
    // 0x2e83dc: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x2e83dcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e83e0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2e83e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2e83e4: 0x14e30015  bne         $a3, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E83E4u;
    {
        const bool branch_taken_0x2e83e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e83e4) {
            ctx->pc = 0x2E843Cu;
            goto label_2e843c;
        }
    }
    ctx->pc = 0x2E83ECu;
    // 0x2e83ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e83ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e83f0: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x2e83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2e83f4: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2e83f4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e83f8: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E83F8u;
    {
        const bool branch_taken_0x2e83f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e83f8) {
            ctx->pc = 0x2E8404u;
            goto label_2e8404;
        }
    }
    ctx->pc = 0x2E8400u;
    // 0x2e8400: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e8404:
    // 0x2e8404: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2e8404u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e8408: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x2e8408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x2e840c: 0x14e30048  bne         $a3, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2E840Cu;
    {
        const bool branch_taken_0x2e840c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e840c) {
            ctx->pc = 0x2E8530u;
            goto label_2e8530;
        }
    }
    ctx->pc = 0x2E8414u;
    // 0x2e8414: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2E8414u;
    {
        const bool branch_taken_0x2e8414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8414u;
        // 0x2e8418: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8414) {
            ctx->pc = 0x2E8530u;
            goto label_2e8530;
        }
    }
    ctx->pc = 0x2E841Cu;
    // 0x2e841c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2e841cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2e8420:
    // 0x2e8420: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2e8420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2e8424: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2E8424u;
    {
        const bool branch_taken_0x2e8424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8424u;
        // 0x2e8428: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8424) {
            ctx->pc = 0x2E854Cu;
            goto label_2e854c;
        }
    }
    ctx->pc = 0x2E842Cu;
    // 0x2e842c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x2e842cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2e8430: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2E8430u;
    {
        const bool branch_taken_0x2e8430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e8430) {
            ctx->pc = 0x2E8548u;
            goto label_2e8548;
        }
    }
    ctx->pc = 0x2E8438u;
label_2e8438:
    // 0x2e8438: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2e8438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e843c:
    // 0x2e843c: 0x80870000  lb          $a3, 0x0($a0)
    ctx->pc = 0x2e843cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e8440: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2e8440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2e8444: 0x10e30043  beq         $a3, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2E8444u;
    {
        const bool branch_taken_0x2e8444 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8444) {
            ctx->pc = 0x2E8554u;
            goto label_2e8554;
        }
    }
    ctx->pc = 0x2E844Cu;
    // 0x2e844c: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x2e844cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2e8450: 0x10e30040  beq         $a3, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x2E8450u;
    {
        const bool branch_taken_0x2e8450 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8450) {
            ctx->pc = 0x2E8554u;
            goto label_2e8554;
        }
    }
    ctx->pc = 0x2E8458u;
    // 0x2e8458: 0x24080052  addiu       $t0, $zero, 0x52
    ctx->pc = 0x2e8458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2e845c: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x2e845cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2e8460: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x2e8460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x2e8464: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x2e8464u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2e8468:
    // 0x2e8468: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x2e8468u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e846c: 0x10c90004  beq         $a2, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E846Cu;
    {
        const bool branch_taken_0x2e846c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x2e846c) {
            ctx->pc = 0x2E8480u;
            goto label_2e8480;
        }
    }
    ctx->pc = 0x2E8474u;
    // 0x2e8474: 0x14c80026  bne         $a2, $t0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2E8474u;
    {
        const bool branch_taken_0x2e8474 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x2e8474) {
            ctx->pc = 0x2E8510u;
            goto label_2e8510;
        }
    }
    ctx->pc = 0x2E847Cu;
    // 0x2e847c: 0x0  nop
    ctx->pc = 0x2e847cu;
    // NOP
label_2e8480:
    // 0x2e8480: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2e8480u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e8484: 0x14c30022  bne         $a2, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E8484u;
    {
        const bool branch_taken_0x2e8484 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e8484) {
            ctx->pc = 0x2E8510u;
            goto label_2e8510;
        }
    }
    ctx->pc = 0x2E848Cu;
    // 0x2e848c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e848cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e8490: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2e8490u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e8494: 0x14670008  bne         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8494u;
    {
        const bool branch_taken_0x2e8494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x2E8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8494u;
        // 0x2e8498: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8494) {
            ctx->pc = 0x2E84B8u;
            goto label_2e84b8;
        }
    }
    ctx->pc = 0x2E849Cu;
    // 0x2e849c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2e849cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e84a0: 0x14670003  bne         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E84A0u;
    {
        const bool branch_taken_0x2e84a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x2e84a0) {
            ctx->pc = 0x2E84B0u;
            goto label_2e84b0;
        }
    }
    ctx->pc = 0x2E84A8u;
    // 0x2e84a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e84a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e84ac: 0x0  nop
    ctx->pc = 0x2e84acu;
    // NOP
label_2e84b0:
    // 0x2e84b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e84b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e84b4: 0x0  nop
    ctx->pc = 0x2e84b4u;
    // NOP
label_2e84b8:
    // 0x2e84b8: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x2e84b8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e84bc: 0x10c7005c  beq         $a2, $a3, . + 4 + (0x5C << 2)
    ctx->pc = 0x2E84BCu;
    {
        const bool branch_taken_0x2e84bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x2e84bc) {
            ctx->pc = 0x2E8630u;
            goto label_2e8630;
        }
    }
    ctx->pc = 0x2E84C4u;
    // 0x2e84c4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2e84c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e84c8: 0x14650007  bne         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E84C8u;
    {
        const bool branch_taken_0x2e84c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2e84c8) {
            ctx->pc = 0x2E84E8u;
            goto label_2e84e8;
        }
    }
    ctx->pc = 0x2E84D0u;
    // 0x2e84d0: 0x14c50003  bne         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E84D0u;
    {
        const bool branch_taken_0x2e84d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x2e84d0) {
            ctx->pc = 0x2E84E0u;
            goto label_2e84e0;
        }
    }
    ctx->pc = 0x2E84D8u;
    // 0x2e84d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e84d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e84dc: 0x0  nop
    ctx->pc = 0x2e84dcu;
    // NOP
label_2e84e0:
    // 0x2e84e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e84e4: 0x0  nop
    ctx->pc = 0x2e84e4u;
    // NOP
label_2e84e8:
    // 0x2e84e8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2e84e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e84ec: 0x1465ffde  bne         $v1, $a1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2E84ECu;
    {
        const bool branch_taken_0x2e84ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2e84ec) {
            ctx->pc = 0x2E8468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8468;
        }
    }
    ctx->pc = 0x2E84F4u;
    // 0x2e84f4: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2E84F4u;
    {
        const bool branch_taken_0x2e84f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84F4u;
        // 0x2e84f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84f4) {
            ctx->pc = 0x2E863Cu;
            goto label_2e863c;
        }
    }
    ctx->pc = 0x2E84FCu;
label_2e84fc:
    // 0x2e84fc: 0x10a0004e  beqz        $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x2E84FCu;
    {
        const bool branch_taken_0x2e84fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e84fc) {
            ctx->pc = 0x2E8638u;
            goto label_2e8638;
        }
    }
    ctx->pc = 0x2E8504u;
    // 0x2e8504: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e8504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e8508: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e850c: 0x0  nop
    ctx->pc = 0x2e850cu;
    // NOP
label_2e8510:
    // 0x2e8510: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x2e8510u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e8514: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2e8514u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e8518: 0x10a3fff8  beq         $a1, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E8518u;
    {
        const bool branch_taken_0x2e8518 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8518) {
            ctx->pc = 0x2E84FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e84fc;
        }
    }
    ctx->pc = 0x2E8520u;
    // 0x2e8520: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2E8520u;
    {
        const bool branch_taken_0x2e8520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8520u;
        // 0x2e8524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8520) {
            ctx->pc = 0x2E863Cu;
            goto label_2e863c;
        }
    }
    ctx->pc = 0x2E8528u;
label_2e8528:
    // 0x2e8528: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2E8528u;
    {
        const bool branch_taken_0x2e8528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8528u;
        // 0x2e852c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8528) {
            ctx->pc = 0x2E863Cu;
            goto label_2e863c;
        }
    }
    ctx->pc = 0x2E8530u;
label_2e8530:
    // 0x2e8530: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2e8530u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e8534: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x2e8534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x2e8538: 0x1462ffbf  bne         $v1, $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x2E8538u;
    {
        const bool branch_taken_0x2e8538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e8538) {
            ctx->pc = 0x2E8438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8438;
        }
    }
    ctx->pc = 0x2E8540u;
    // 0x2e8540: 0x1000ffb7  b           . + 4 + (-0x49 << 2)
    ctx->pc = 0x2E8540u;
    {
        const bool branch_taken_0x2e8540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8540u;
        // 0x2e8544: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8540) {
            ctx->pc = 0x2E8420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8420;
        }
    }
    ctx->pc = 0x2E8548u;
label_2e8548:
    // 0x2e8548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e854c:
    // 0x2e854c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2E854Cu;
    {
        const bool branch_taken_0x2e854c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e854c) {
            ctx->pc = 0x2E863Cu;
            goto label_2e863c;
        }
    }
    ctx->pc = 0x2E8554u;
label_2e8554:
    // 0x2e8554: 0x80870000  lb          $a3, 0x0($a0)
    ctx->pc = 0x2e8554u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e8558: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2e8558u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e855c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e855cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e8560: 0x14e3001b  bne         $a3, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E8560u;
    {
        const bool branch_taken_0x2e8560 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E8564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8560u;
        // 0x2e8564: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8560) {
            ctx->pc = 0x2E85D0u;
            goto label_2e85d0;
        }
    }
    ctx->pc = 0x2E8568u;
    // 0x2e8568: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2e8568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e856c: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x2e856cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2e8570:
    // 0x2e8570: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2e8570u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e8574: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x2e8574u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e8578: 0x11070017  beq         $t0, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E8578u;
    {
        const bool branch_taken_0x2e8578 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x2E857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8578u;
        // 0x2e857c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8578) {
            ctx->pc = 0x2E85D8u;
            goto label_2e85d8;
        }
    }
    ctx->pc = 0x2E8580u;
label_2e8580:
    // 0x2e8580: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2e8580u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e8584: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e8584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e8588: 0x0  nop
    ctx->pc = 0x2e8588u;
    // NOP
    // 0x2e858c: 0x0  nop
    ctx->pc = 0x2e858cu;
    // NOP
    // 0x2e8590: 0x0  nop
    ctx->pc = 0x2e8590u;
    // NOP
    // 0x2e8594: 0x1445fffa  bne         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E8594u;
    {
        const bool branch_taken_0x2e8594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2e8594) {
            ctx->pc = 0x2E8580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8580;
        }
    }
    ctx->pc = 0x2E859Cu;
    // 0x2e859c: 0x0  nop
    ctx->pc = 0x2e859cu;
    // NOP
label_2e85a0:
    // 0x2e85a0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2e85a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e85a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e85a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e85a8: 0x0  nop
    ctx->pc = 0x2e85a8u;
    // NOP
    // 0x2e85ac: 0x0  nop
    ctx->pc = 0x2e85acu;
    // NOP
    // 0x2e85b0: 0x0  nop
    ctx->pc = 0x2e85b0u;
    // NOP
    // 0x2e85b4: 0x1445fffa  bne         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E85B4u;
    {
        const bool branch_taken_0x2e85b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2e85b4) {
            ctx->pc = 0x2E85A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e85a0;
        }
    }
    ctx->pc = 0x2E85BCu;
    // 0x2e85bc: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2e85bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e85c0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E85C0u;
    {
        const bool branch_taken_0x2e85c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85C0u;
        // 0x2e85c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85c0) {
            ctx->pc = 0x2E8628u;
            goto label_2e8628;
        }
    }
    ctx->pc = 0x2E85C8u;
    // 0x2e85c8: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x2E85C8u;
    {
        const bool branch_taken_0x2e85c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E85CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85C8u;
        // 0x2e85cc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85c8) {
            ctx->pc = 0x2E8570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8570;
        }
    }
    ctx->pc = 0x2E85D0u;
label_2e85d0:
    // 0x2e85d0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E85D0u;
    {
        const bool branch_taken_0x2e85d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E85D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85D0u;
        // 0x2e85d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85d0) {
            ctx->pc = 0x2E863Cu;
            goto label_2e863c;
        }
    }
    ctx->pc = 0x2E85D8u;
label_2e85d8:
    // 0x2e85d8: 0x1505ffe5  bne         $t0, $a1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2E85D8u;
    {
        const bool branch_taken_0x2e85d8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x2E85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85D8u;
        // 0x2e85dc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85d8) {
            ctx->pc = 0x2E8570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8570;
        }
    }
    ctx->pc = 0x2E85E0u;
    // 0x2e85e0: 0x80870000  lb          $a3, 0x0($a0)
    ctx->pc = 0x2e85e0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e85e4: 0x10e5000c  beq         $a3, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E85E4u;
    {
        const bool branch_taken_0x2e85e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x2E85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85E4u;
        // 0x2e85e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85e4) {
            ctx->pc = 0x2E8618u;
            goto label_2e8618;
        }
    }
    ctx->pc = 0x2E85ECu;
    // 0x2e85ec: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x2e85ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2e85f0:
    // 0x2e85f0: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x2e85f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2e85f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e85f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e85f8: 0x80870000  lb          $a3, 0x0($a0)
    ctx->pc = 0x2e85f8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e85fc: 0x818b8  dsll        $v1, $t0, 2
    ctx->pc = 0x2e85fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 2);
    // 0x2e8600: 0x68182d  daddu       $v1, $v1, $t0
    ctx->pc = 0x2e8600u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 8));
    // 0x2e8604: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2e8604u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2e8608: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x2e8608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
    // 0x2e860c: 0xa3182d  daddu       $v1, $a1, $v1
    ctx->pc = 0x2e860cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2e8610: 0x14e2fff7  bne         $a3, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E8610u;
    {
        const bool branch_taken_0x2e8610 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8610u;
        // 0x2e8614: 0x6468ffd0  daddiu      $t0, $v1, -0x30 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967248);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8610) {
            ctx->pc = 0x2E85F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e85f0;
        }
    }
    ctx->pc = 0x2E8618u;
label_2e8618:
    // 0x2e8618: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x2e8618u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x2e861c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E861Cu;
    {
        const bool branch_taken_0x2e861c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E861Cu;
        // 0x2e8620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e861c) {
            ctx->pc = 0x2E863Cu;
            goto label_2e863c;
        }
    }
    ctx->pc = 0x2E8624u;
    // 0x2e8624: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8628:
    // 0x2e8628: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8628u;
    {
        const bool branch_taken_0x2e8628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8628) {
            ctx->pc = 0x2E863Cu;
            goto label_2e863c;
        }
    }
    ctx->pc = 0x2E8630u;
label_2e8630:
    // 0x2e8630: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E8630u;
    {
        const bool branch_taken_0x2e8630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8630u;
        // 0x2e8634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8630) {
            ctx->pc = 0x2E863Cu;
            goto label_2e863c;
        }
    }
    ctx->pc = 0x2E8638u;
label_2e8638:
    // 0x2e8638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e863c:
    // 0x2e863c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E863Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E863Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8644u;
    // 0x2e8644: 0x0  nop
    ctx->pc = 0x2e8644u;
    // NOP
    // 0x2e8648: 0x0  nop
    ctx->pc = 0x2e8648u;
    // NOP
    // 0x2e864c: 0x0  nop
    ctx->pc = 0x2e864cu;
    // NOP
    ctx->pc = 0x2e8650u;
}
