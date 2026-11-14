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

// Function: sub_00409708
// Address: 0x409708 - 0x4098d0
void sub_00409708_0x409708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409708_0x409708");
#endif

    switch (ctx->pc) {
        case 0x409720u: goto label_409720;
        case 0x409730u: goto label_409730;
        default: break;
    }

    ctx->pc = 0x409708u;

    // 0x409708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x409708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40970c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x40970cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409710: 0x1140006b  beqz        $t2, . + 4 + (0x6B << 2)
    ctx->pc = 0x409710u;
    {
        const bool branch_taken_0x409710 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x409714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409710u;
        // 0x409714: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409710) {
            ctx->pc = 0x4098C0u;
            goto label_4098c0;
        }
    }
    ctx->pc = 0x409718u;
    // 0x409718: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x409718u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x40971c: 0x0  nop
    ctx->pc = 0x40971cu;
    // NOP
label_409720:
    // 0x409720: 0x51200065  beql        $t1, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x409720u;
    {
        const bool branch_taken_0x409720 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x409720) {
            ctx->pc = 0x409724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409720u;
            // 0x409724: 0x8d4a0000  lw          $t2, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4098B8u;
            goto label_4098b8;
        }
    }
    ctx->pc = 0x409728u;
    // 0x409728: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x409728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x40972c: 0x0  nop
    ctx->pc = 0x40972cu;
    // NOP
label_409730:
    // 0x409730: 0x8d45000c  lw          $a1, 0xC($t2)
    ctx->pc = 0x409730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x409734: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x409734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x409738: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x409738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x40973c: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x40973cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x409740: 0x8d430010  lw          $v1, 0x10($t2)
    ctx->pc = 0x409740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x409744: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x409744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x409748: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x409748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x40974c: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x40974cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x409750: 0x8d440014  lw          $a0, 0x14($t2)
    ctx->pc = 0x409750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x409754: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x409754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x409758: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x409758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x40975c: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x40975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x409760: 0x8d430018  lw          $v1, 0x18($t2)
    ctx->pc = 0x409760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x409764: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x409764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x409768: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x409768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x40976c: 0x8d22001c  lw          $v0, 0x1C($t1)
    ctx->pc = 0x40976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x409770: 0x8d44001c  lw          $a0, 0x1C($t2)
    ctx->pc = 0x409770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x409774: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x409774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x409778: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x409778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x40977c: 0x8d220020  lw          $v0, 0x20($t1)
    ctx->pc = 0x40977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x409780: 0x8d430020  lw          $v1, 0x20($t2)
    ctx->pc = 0x409780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x409784: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x409784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x409788: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x409788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x40978c: 0x8d220024  lw          $v0, 0x24($t1)
    ctx->pc = 0x40978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x409790: 0x8d440024  lw          $a0, 0x24($t2)
    ctx->pc = 0x409790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x409794: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x409794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x409798: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x409798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x40979c: 0x8d430028  lw          $v1, 0x28($t2)
    ctx->pc = 0x40979cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x4097a0: 0x8d220028  lw          $v0, 0x28($t1)
    ctx->pc = 0x4097a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x4097a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4097a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4097a8: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x4097a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x4097ac: 0x8d42002c  lw          $v0, 0x2C($t2)
    ctx->pc = 0x4097acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x4097b0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4097b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4097b4: 0x8d430030  lw          $v1, 0x30($t2)
    ctx->pc = 0x4097b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x4097b8: 0xad42002c  sw          $v0, 0x2C($t2)
    ctx->pc = 0x4097b8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 44), GPR_U32(ctx, 2));
    // 0x4097bc: 0x8d440034  lw          $a0, 0x34($t2)
    ctx->pc = 0x4097bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 52)));
    // 0x4097c0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4097c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4097c4: 0x8d450038  lw          $a1, 0x38($t2)
    ctx->pc = 0x4097c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 56)));
    // 0x4097c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4097c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4097cc: 0x8d46003c  lw          $a2, 0x3C($t2)
    ctx->pc = 0x4097ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 60)));
    // 0x4097d0: 0xad430030  sw          $v1, 0x30($t2)
    ctx->pc = 0x4097d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 48), GPR_U32(ctx, 3));
    // 0x4097d4: 0x8d470040  lw          $a3, 0x40($t2)
    ctx->pc = 0x4097d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 64)));
    // 0x4097d8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4097d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4097dc: 0x8d430044  lw          $v1, 0x44($t2)
    ctx->pc = 0x4097dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 68)));
    // 0x4097e0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4097e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4097e4: 0x8d480048  lw          $t0, 0x48($t2)
    ctx->pc = 0x4097e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 72)));
    // 0x4097e8: 0xad440034  sw          $a0, 0x34($t2)
    ctx->pc = 0x4097e8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 52), GPR_U32(ctx, 4));
    // 0x4097ec: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4097ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4097f0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4097f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4097f4: 0xad450038  sw          $a1, 0x38($t2)
    ctx->pc = 0x4097f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 56), GPR_U32(ctx, 5));
    // 0x4097f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4097f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4097fc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4097fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x409800: 0xad46003c  sw          $a2, 0x3C($t2)
    ctx->pc = 0x409800u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 60), GPR_U32(ctx, 6));
    // 0x409804: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x409804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x409808: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x409808u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x40980c: 0xad470040  sw          $a3, 0x40($t2)
    ctx->pc = 0x40980cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 64), GPR_U32(ctx, 7));
    // 0x409810: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x409810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x409814: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x409814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x409818: 0xad430044  sw          $v1, 0x44($t2)
    ctx->pc = 0x409818u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 68), GPR_U32(ctx, 3));
    // 0x40981c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x40981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x409820: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x409820u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x409824: 0xad480048  sw          $t0, 0x48($t2)
    ctx->pc = 0x409824u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 72), GPR_U32(ctx, 8));
    // 0x409828: 0x8d22002c  lw          $v0, 0x2C($t1)
    ctx->pc = 0x409828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x40982c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x40982cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x409830: 0x8d240030  lw          $a0, 0x30($t1)
    ctx->pc = 0x409830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x409834: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x409834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x409838: 0x8d250034  lw          $a1, 0x34($t1)
    ctx->pc = 0x409838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x40983c: 0xad22002c  sw          $v0, 0x2C($t1)
    ctx->pc = 0x40983cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 2));
    // 0x409840: 0x8d230038  lw          $v1, 0x38($t1)
    ctx->pc = 0x409840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x409844: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x409844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x409848: 0x8d26003c  lw          $a2, 0x3C($t1)
    ctx->pc = 0x409848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x40984c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x40984cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x409850: 0x8d270040  lw          $a3, 0x40($t1)
    ctx->pc = 0x409850u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x409854: 0xad240030  sw          $a0, 0x30($t1)
    ctx->pc = 0x409854u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 4));
    // 0x409858: 0x8d280044  lw          $t0, 0x44($t1)
    ctx->pc = 0x409858u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x40985c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x40985cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x409860: 0x8d240048  lw          $a0, 0x48($t1)
    ctx->pc = 0x409860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x409864: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x409864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x409868: 0xad250034  sw          $a1, 0x34($t1)
    ctx->pc = 0x409868u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 52), GPR_U32(ctx, 5));
    // 0x40986c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x40986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x409870: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x409870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x409874: 0xad230038  sw          $v1, 0x38($t1)
    ctx->pc = 0x409874u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 56), GPR_U32(ctx, 3));
    // 0x409878: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x409878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40987c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x40987cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x409880: 0xad26003c  sw          $a2, 0x3C($t1)
    ctx->pc = 0x409880u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 60), GPR_U32(ctx, 6));
    // 0x409884: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x409884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x409888: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x409888u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x40988c: 0xad270040  sw          $a3, 0x40($t1)
    ctx->pc = 0x40988cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 64), GPR_U32(ctx, 7));
    // 0x409890: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x409890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x409894: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x409894u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x409898: 0xad280044  sw          $t0, 0x44($t1)
    ctx->pc = 0x409898u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 68), GPR_U32(ctx, 8));
    // 0x40989c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x40989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4098a0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4098a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4098a4: 0xad240048  sw          $a0, 0x48($t1)
    ctx->pc = 0x4098a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 72), GPR_U32(ctx, 4));
    // 0x4098a8: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x4098a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4098ac: 0x5520ffa0  bnel        $t1, $zero, . + 4 + (-0x60 << 2)
    ctx->pc = 0x4098ACu;
    {
        const bool branch_taken_0x4098ac = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x4098ac) {
            ctx->pc = 0x4098B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4098ACu;
            // 0x4098b0: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409730;
        }
    }
    ctx->pc = 0x4098B4u;
    // 0x4098b4: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x4098b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4098b8:
    // 0x4098b8: 0x5540ff99  bnel        $t2, $zero, . + 4 + (-0x67 << 2)
    ctx->pc = 0x4098B8u;
    {
        const bool branch_taken_0x4098b8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x4098b8) {
            ctx->pc = 0x4098BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4098B8u;
            // 0x4098bc: 0x8d490000  lw          $t1, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409720;
        }
    }
    ctx->pc = 0x4098C0u;
label_4098c0:
    // 0x4098c0: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x4098c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4098c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4098C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4098C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4098C4u;
        // 0x4098c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4098C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4098CCu;
    // 0x4098cc: 0x0  nop
    ctx->pc = 0x4098ccu;
    // NOP
    ctx->pc = 0x4098d0u;
}
