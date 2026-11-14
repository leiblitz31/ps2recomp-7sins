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

// Function: sub_00141540
// Address: 0x141540 - 0x141750
void sub_00141540_0x141540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141540_0x141540");
#endif

    switch (ctx->pc) {
        case 0x141584u: goto label_141584;
        default: break;
    }

    ctx->pc = 0x141540u;

    // 0x141540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x141540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x141544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141548: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x141548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14154c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14154cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x141550: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x141550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x141554: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x141554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141558: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14155c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x14155cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x141560: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x141560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x141564: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x141564u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x141568: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x141568u;
    {
        const bool branch_taken_0x141568 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x141568) {
            ctx->pc = 0x141578u;
            goto label_141578;
        }
    }
    ctx->pc = 0x141570u;
    // 0x141570: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x141570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x141574: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x141574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_141578:
    // 0x141578: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x141578u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x14157c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x14157Cu;
    {
        const bool branch_taken_0x14157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14157c) {
            ctx->pc = 0x141648u;
            goto label_141648;
        }
    }
    ctx->pc = 0x141584u;
label_141584:
    // 0x141584: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141588: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x141588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14158c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x14158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141590: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141594: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141594u;
    {
        const bool branch_taken_0x141594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x141594) {
            ctx->pc = 0x1415A8u;
            goto label_1415a8;
        }
    }
    ctx->pc = 0x14159Cu;
    // 0x14159c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1415a0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1415A0u;
    {
        const bool branch_taken_0x1415a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1415a0) {
            ctx->pc = 0x14173Cu;
            goto label_14173c;
        }
    }
    ctx->pc = 0x1415A8u;
label_1415a8:
    // 0x1415a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1415a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1415ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1415acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1415b0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1415b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1415b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1415b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1415b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1415b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1415bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1415bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1415c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1415c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1415c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1415C4u;
    {
        const bool branch_taken_0x1415c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1415c4) {
            ctx->pc = 0x1415D8u;
            goto label_1415d8;
        }
    }
    ctx->pc = 0x1415CCu;
    // 0x1415cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1415ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1415d0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1415D0u;
    {
        const bool branch_taken_0x1415d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1415d0) {
            ctx->pc = 0x14173Cu;
            goto label_14173c;
        }
    }
    ctx->pc = 0x1415D8u;
label_1415d8:
    // 0x1415d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1415d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1415dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1415dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1415e0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1415e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1415e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1415e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1415e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1415e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1415ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1415ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1415f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1415f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1415f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1415F4u;
    {
        const bool branch_taken_0x1415f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1415f4) {
            ctx->pc = 0x141608u;
            goto label_141608;
        }
    }
    ctx->pc = 0x1415FCu;
    // 0x1415fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1415fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141600: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x141600u;
    {
        const bool branch_taken_0x141600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141600) {
            ctx->pc = 0x14173Cu;
            goto label_14173c;
        }
    }
    ctx->pc = 0x141608u;
label_141608:
    // 0x141608: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14160c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x14160cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x141610: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x141610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x141614: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141618: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x141618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14161c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x14161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141620: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141624: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141624u;
    {
        const bool branch_taken_0x141624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x141624) {
            ctx->pc = 0x141638u;
            goto label_141638;
        }
    }
    ctx->pc = 0x14162Cu;
    // 0x14162c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141630: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x141630u;
    {
        const bool branch_taken_0x141630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141630) {
            ctx->pc = 0x14173Cu;
            goto label_14173c;
        }
    }
    ctx->pc = 0x141638u;
label_141638:
    // 0x141638: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14163c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x14163cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x141640: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x141640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x141644: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x141644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_141648:
    // 0x141648: 0x1e00ffce  bgtz        $s0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x141648u;
    {
        const bool branch_taken_0x141648 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x141648) {
            ctx->pc = 0x141584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141584;
        }
    }
    ctx->pc = 0x141650u;
    // 0x141650: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x141650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141654: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141658: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x141658u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14165c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x141660: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x141660u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x141664: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141664u;
    {
        const bool branch_taken_0x141664 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x141664) {
            ctx->pc = 0x141674u;
            goto label_141674;
        }
    }
    ctx->pc = 0x14166Cu;
    // 0x14166c: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x14166cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x141670: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x141670u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_141674:
    // 0x141674: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x141674u;
    {
        const bool branch_taken_0x141674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141674) {
            ctx->pc = 0x141738u;
            goto label_141738;
        }
    }
    ctx->pc = 0x14167Cu;
    // 0x14167c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141680: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x141680u;
    {
        const bool branch_taken_0x141680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141680) {
            ctx->pc = 0x141708u;
            goto label_141708;
        }
    }
    ctx->pc = 0x141688u;
    // 0x141688: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14168c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14168Cu;
    {
        const bool branch_taken_0x14168c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14168c) {
            ctx->pc = 0x1416D8u;
            goto label_1416d8;
        }
    }
    ctx->pc = 0x141694u;
    // 0x141694: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x141694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x141698: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141698u;
    {
        const bool branch_taken_0x141698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141698) {
            ctx->pc = 0x1416A8u;
            goto label_1416a8;
        }
    }
    ctx->pc = 0x1416A0u;
    // 0x1416a0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1416A0u;
    {
        const bool branch_taken_0x1416a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1416a0) {
            ctx->pc = 0x141738u;
            goto label_141738;
        }
    }
    ctx->pc = 0x1416A8u;
label_1416a8:
    // 0x1416a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1416a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1416ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1416acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1416b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1416b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1416b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1416b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1416b8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1416B8u;
    {
        const bool branch_taken_0x1416b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1416b8) {
            ctx->pc = 0x1416CCu;
            goto label_1416cc;
        }
    }
    ctx->pc = 0x1416C0u;
    // 0x1416c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1416c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1416c4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1416C4u;
    {
        const bool branch_taken_0x1416c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1416c4) {
            ctx->pc = 0x14173Cu;
            goto label_14173c;
        }
    }
    ctx->pc = 0x1416CCu;
label_1416cc:
    // 0x1416cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1416ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1416d0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1416d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1416d4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1416d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1416d8:
    // 0x1416d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1416d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1416dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1416dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1416e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1416e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1416e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1416e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1416e8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1416E8u;
    {
        const bool branch_taken_0x1416e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1416e8) {
            ctx->pc = 0x1416FCu;
            goto label_1416fc;
        }
    }
    ctx->pc = 0x1416F0u;
    // 0x1416f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1416f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1416f4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1416F4u;
    {
        const bool branch_taken_0x1416f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1416f4) {
            ctx->pc = 0x14173Cu;
            goto label_14173c;
        }
    }
    ctx->pc = 0x1416FCu;
label_1416fc:
    // 0x1416fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1416fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141700: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x141700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x141704: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x141704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_141708:
    // 0x141708: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14170c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141710: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x141710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141714: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141718: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141718u;
    {
        const bool branch_taken_0x141718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x141718) {
            ctx->pc = 0x14172Cu;
            goto label_14172c;
        }
    }
    ctx->pc = 0x141720u;
    // 0x141720: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141724: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x141724u;
    {
        const bool branch_taken_0x141724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141724) {
            ctx->pc = 0x14173Cu;
            goto label_14173c;
        }
    }
    ctx->pc = 0x14172Cu;
label_14172c:
    // 0x14172c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14172cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141730: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x141730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x141734: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x141734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_141738:
    // 0x141738: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x141738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_14173c:
    // 0x14173c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14173cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141740: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x141740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x141744: 0x3e00008  jr          $ra
    ctx->pc = 0x141744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14174Cu;
    // 0x14174c: 0x0  nop
    ctx->pc = 0x14174cu;
    // NOP
    ctx->pc = 0x141750u;
}
