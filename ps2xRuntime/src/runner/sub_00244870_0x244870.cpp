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

// Function: sub_00244870
// Address: 0x244870 - 0x244b60
void sub_00244870_0x244870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244870_0x244870");
#endif

    switch (ctx->pc) {
        case 0x244870u: goto label_244870;
        case 0x244874u: goto label_244874;
        case 0x244878u: goto label_244878;
        case 0x24487cu: goto label_24487c;
        case 0x244880u: goto label_244880;
        case 0x244884u: goto label_244884;
        case 0x244888u: goto label_244888;
        case 0x24488cu: goto label_24488c;
        case 0x244890u: goto label_244890;
        case 0x244894u: goto label_244894;
        case 0x244898u: goto label_244898;
        case 0x24489cu: goto label_24489c;
        case 0x2448a0u: goto label_2448a0;
        case 0x2448a4u: goto label_2448a4;
        case 0x2448a8u: goto label_2448a8;
        case 0x2448acu: goto label_2448ac;
        case 0x2448b0u: goto label_2448b0;
        case 0x2448b4u: goto label_2448b4;
        case 0x2448b8u: goto label_2448b8;
        case 0x2448bcu: goto label_2448bc;
        case 0x2448c0u: goto label_2448c0;
        case 0x2448c4u: goto label_2448c4;
        case 0x2448c8u: goto label_2448c8;
        case 0x2448ccu: goto label_2448cc;
        case 0x2448d0u: goto label_2448d0;
        case 0x2448d4u: goto label_2448d4;
        case 0x2448d8u: goto label_2448d8;
        case 0x2448dcu: goto label_2448dc;
        case 0x2448e0u: goto label_2448e0;
        case 0x2448e4u: goto label_2448e4;
        case 0x2448e8u: goto label_2448e8;
        case 0x2448ecu: goto label_2448ec;
        case 0x2448f0u: goto label_2448f0;
        case 0x2448f4u: goto label_2448f4;
        case 0x2448f8u: goto label_2448f8;
        case 0x2448fcu: goto label_2448fc;
        case 0x244900u: goto label_244900;
        case 0x244904u: goto label_244904;
        case 0x244908u: goto label_244908;
        case 0x24490cu: goto label_24490c;
        case 0x244910u: goto label_244910;
        case 0x244914u: goto label_244914;
        case 0x244918u: goto label_244918;
        case 0x24491cu: goto label_24491c;
        case 0x244920u: goto label_244920;
        case 0x244924u: goto label_244924;
        case 0x244928u: goto label_244928;
        case 0x24492cu: goto label_24492c;
        case 0x244930u: goto label_244930;
        case 0x244934u: goto label_244934;
        case 0x244938u: goto label_244938;
        case 0x24493cu: goto label_24493c;
        case 0x244940u: goto label_244940;
        case 0x244944u: goto label_244944;
        case 0x244948u: goto label_244948;
        case 0x24494cu: goto label_24494c;
        case 0x244950u: goto label_244950;
        case 0x244954u: goto label_244954;
        case 0x244958u: goto label_244958;
        case 0x24495cu: goto label_24495c;
        case 0x244960u: goto label_244960;
        case 0x244964u: goto label_244964;
        case 0x244968u: goto label_244968;
        case 0x24496cu: goto label_24496c;
        case 0x244970u: goto label_244970;
        case 0x244974u: goto label_244974;
        case 0x244978u: goto label_244978;
        case 0x24497cu: goto label_24497c;
        case 0x244980u: goto label_244980;
        case 0x244984u: goto label_244984;
        case 0x244988u: goto label_244988;
        case 0x24498cu: goto label_24498c;
        case 0x244990u: goto label_244990;
        case 0x244994u: goto label_244994;
        case 0x244998u: goto label_244998;
        case 0x24499cu: goto label_24499c;
        case 0x2449a0u: goto label_2449a0;
        case 0x2449a4u: goto label_2449a4;
        case 0x2449a8u: goto label_2449a8;
        case 0x2449acu: goto label_2449ac;
        case 0x2449b0u: goto label_2449b0;
        case 0x2449b4u: goto label_2449b4;
        case 0x2449b8u: goto label_2449b8;
        case 0x2449bcu: goto label_2449bc;
        case 0x2449c0u: goto label_2449c0;
        case 0x2449c4u: goto label_2449c4;
        case 0x2449c8u: goto label_2449c8;
        case 0x2449ccu: goto label_2449cc;
        case 0x2449d0u: goto label_2449d0;
        case 0x2449d4u: goto label_2449d4;
        case 0x2449d8u: goto label_2449d8;
        case 0x2449dcu: goto label_2449dc;
        case 0x2449e0u: goto label_2449e0;
        case 0x2449e4u: goto label_2449e4;
        case 0x2449e8u: goto label_2449e8;
        case 0x2449ecu: goto label_2449ec;
        case 0x2449f0u: goto label_2449f0;
        case 0x2449f4u: goto label_2449f4;
        case 0x2449f8u: goto label_2449f8;
        case 0x2449fcu: goto label_2449fc;
        case 0x244a00u: goto label_244a00;
        case 0x244a04u: goto label_244a04;
        case 0x244a08u: goto label_244a08;
        case 0x244a0cu: goto label_244a0c;
        case 0x244a10u: goto label_244a10;
        case 0x244a14u: goto label_244a14;
        case 0x244a18u: goto label_244a18;
        case 0x244a1cu: goto label_244a1c;
        case 0x244a20u: goto label_244a20;
        case 0x244a24u: goto label_244a24;
        case 0x244a28u: goto label_244a28;
        case 0x244a2cu: goto label_244a2c;
        case 0x244a30u: goto label_244a30;
        case 0x244a34u: goto label_244a34;
        case 0x244a38u: goto label_244a38;
        case 0x244a3cu: goto label_244a3c;
        case 0x244a40u: goto label_244a40;
        case 0x244a44u: goto label_244a44;
        case 0x244a48u: goto label_244a48;
        case 0x244a4cu: goto label_244a4c;
        case 0x244a50u: goto label_244a50;
        case 0x244a54u: goto label_244a54;
        case 0x244a58u: goto label_244a58;
        case 0x244a5cu: goto label_244a5c;
        case 0x244a60u: goto label_244a60;
        case 0x244a64u: goto label_244a64;
        case 0x244a68u: goto label_244a68;
        case 0x244a6cu: goto label_244a6c;
        case 0x244a70u: goto label_244a70;
        case 0x244a74u: goto label_244a74;
        case 0x244a78u: goto label_244a78;
        case 0x244a7cu: goto label_244a7c;
        case 0x244a80u: goto label_244a80;
        case 0x244a84u: goto label_244a84;
        case 0x244a88u: goto label_244a88;
        case 0x244a8cu: goto label_244a8c;
        case 0x244a90u: goto label_244a90;
        case 0x244a94u: goto label_244a94;
        case 0x244a98u: goto label_244a98;
        case 0x244a9cu: goto label_244a9c;
        case 0x244aa0u: goto label_244aa0;
        case 0x244aa4u: goto label_244aa4;
        case 0x244aa8u: goto label_244aa8;
        case 0x244aacu: goto label_244aac;
        case 0x244ab0u: goto label_244ab0;
        case 0x244ab4u: goto label_244ab4;
        case 0x244ab8u: goto label_244ab8;
        case 0x244abcu: goto label_244abc;
        case 0x244ac0u: goto label_244ac0;
        case 0x244ac4u: goto label_244ac4;
        case 0x244ac8u: goto label_244ac8;
        case 0x244accu: goto label_244acc;
        case 0x244ad0u: goto label_244ad0;
        case 0x244ad4u: goto label_244ad4;
        case 0x244ad8u: goto label_244ad8;
        case 0x244adcu: goto label_244adc;
        case 0x244ae0u: goto label_244ae0;
        case 0x244ae4u: goto label_244ae4;
        case 0x244ae8u: goto label_244ae8;
        case 0x244aecu: goto label_244aec;
        case 0x244af0u: goto label_244af0;
        case 0x244af4u: goto label_244af4;
        case 0x244af8u: goto label_244af8;
        case 0x244afcu: goto label_244afc;
        case 0x244b00u: goto label_244b00;
        case 0x244b04u: goto label_244b04;
        case 0x244b08u: goto label_244b08;
        case 0x244b0cu: goto label_244b0c;
        case 0x244b10u: goto label_244b10;
        case 0x244b14u: goto label_244b14;
        case 0x244b18u: goto label_244b18;
        case 0x244b1cu: goto label_244b1c;
        case 0x244b20u: goto label_244b20;
        case 0x244b24u: goto label_244b24;
        case 0x244b28u: goto label_244b28;
        case 0x244b2cu: goto label_244b2c;
        case 0x244b30u: goto label_244b30;
        case 0x244b34u: goto label_244b34;
        case 0x244b38u: goto label_244b38;
        case 0x244b3cu: goto label_244b3c;
        case 0x244b40u: goto label_244b40;
        case 0x244b44u: goto label_244b44;
        case 0x244b48u: goto label_244b48;
        case 0x244b4cu: goto label_244b4c;
        case 0x244b50u: goto label_244b50;
        case 0x244b54u: goto label_244b54;
        case 0x244b58u: goto label_244b58;
        case 0x244b5cu: goto label_244b5c;
        default: break;
    }

    ctx->pc = 0x244870u;

label_244870:
    // 0x244870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_244874:
    // 0x244874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_244878:
    // 0x244878: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x244878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_24487c:
    // 0x24487c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24487cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_244880:
    // 0x244880: 0xc0854a0  jal         func_215280
label_244884:
    if (ctx->pc == 0x244884u) {
        ctx->pc = 0x244888u;
        goto label_244888;
    }
    ctx->pc = 0x244880u;
    SET_GPR_U32(ctx, 31, 0x244888u);
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x244880u, 0x244888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244888u;
label_244888:
    // 0x244888: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x244888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_24488c:
    // 0x24488c: 0x24635770  addiu       $v1, $v1, 0x5770
    ctx->pc = 0x24488cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22384));
label_244890:
    // 0x244890: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x244890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_244894:
    // 0x244894: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x244894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_244898:
    // 0x244898: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x244898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_24489c:
    // 0x24489c: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x24489cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_2448a0:
    // 0x2448a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2448a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2448a4:
    // 0x2448a4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x2448a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_2448a8:
    // 0x2448a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2448a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2448ac:
    // 0x2448ac: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x2448acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_2448b0:
    // 0x2448b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2448b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2448b4:
    // 0x2448b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2448b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2448b8:
    // 0x2448b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2448b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2448bc:
    // 0x2448bc: 0x3e00008  jr          $ra
label_2448c0:
    if (ctx->pc == 0x2448C0u) {
        ctx->pc = 0x2448C4u;
        goto label_2448c4;
    }
    ctx->pc = 0x2448BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2448BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2448C4u;
label_2448c4:
    // 0x2448c4: 0x0  nop
    ctx->pc = 0x2448c4u;
    // NOP
label_2448c8:
    // 0x2448c8: 0x0  nop
    ctx->pc = 0x2448c8u;
    // NOP
label_2448cc:
    // 0x2448cc: 0x0  nop
    ctx->pc = 0x2448ccu;
    // NOP
label_2448d0:
    // 0x2448d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2448d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2448d4:
    // 0x2448d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2448d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2448d8:
    // 0x2448d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2448d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2448dc:
    // 0x2448dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2448dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2448e0:
    // 0x2448e0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2448e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2448e4:
    // 0x2448e4: 0xc119b68  jal         func_466DA0
label_2448e8:
    if (ctx->pc == 0x2448E8u) {
        ctx->pc = 0x2448ECu;
        goto label_2448ec;
    }
    ctx->pc = 0x2448E4u;
    SET_GPR_U32(ctx, 31, 0x2448ECu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2448E4u, 0x2448ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2448ECu;
label_2448ec:
    // 0x2448ec: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2448ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2448f0:
    // 0x2448f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2448f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2448f4:
    // 0x2448f4: 0xc0400e0  jal         func_100380
label_2448f8:
    if (ctx->pc == 0x2448F8u) {
        ctx->pc = 0x2448FCu;
        goto label_2448fc;
    }
    ctx->pc = 0x2448F4u;
    SET_GPR_U32(ctx, 31, 0x2448FCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2448F4u, 0x2448FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2448FCu;
label_2448fc:
    // 0x2448fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2448fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244900:
    // 0x244900: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_244904:
    if (ctx->pc == 0x244904u) {
        ctx->pc = 0x244908u;
        goto label_244908;
    }
    ctx->pc = 0x244900u;
    {
        const bool branch_taken_0x244900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x244900) {
            ctx->pc = 0x244918u;
            goto label_244918;
        }
    }
    ctx->pc = 0x244908u;
label_244908:
    // 0x244908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24490c:
    // 0x24490c: 0xc088560  jal         func_221580
label_244910:
    if (ctx->pc == 0x244910u) {
        ctx->pc = 0x244914u;
        goto label_244914;
    }
    ctx->pc = 0x24490Cu;
    SET_GPR_U32(ctx, 31, 0x244914u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x24490Cu, 0x244914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244914u;
label_244914:
    // 0x244914: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x244914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244918:
    // 0x244918: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x244918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_24491c:
    // 0x24491c: 0xac500044  sw          $s0, 0x44($v0)
    ctx->pc = 0x24491cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 16));
label_244920:
    // 0x244920: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x244920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_244924:
    // 0x244924: 0xc0854dc  jal         func_215370
label_244928:
    if (ctx->pc == 0x244928u) {
        ctx->pc = 0x24492Cu;
        goto label_24492c;
    }
    ctx->pc = 0x244924u;
    SET_GPR_U32(ctx, 31, 0x24492Cu);
    ctx->pc = 0x215370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215370u, 0x244924u, 0x24492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24492Cu;
label_24492c:
    // 0x24492c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24492cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_244930:
    // 0x244930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x244930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_244934:
    // 0x244934: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x244934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_244938:
    // 0x244938: 0x3e00008  jr          $ra
label_24493c:
    if (ctx->pc == 0x24493Cu) {
        ctx->pc = 0x244940u;
        goto label_244940;
    }
    ctx->pc = 0x244938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244940u;
label_244940:
    // 0x244940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_244944:
    // 0x244944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_244948:
    // 0x244948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x244948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_24494c:
    // 0x24494c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_244950:
    // 0x244950: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x244950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_244954:
    // 0x244954: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_244958:
    if (ctx->pc == 0x244958u) {
        ctx->pc = 0x24495Cu;
        goto label_24495c;
    }
    ctx->pc = 0x244954u;
    {
        const bool branch_taken_0x244954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244954) {
            ctx->pc = 0x244984u;
            goto label_244984;
        }
    }
    ctx->pc = 0x24495Cu;
label_24495c:
    // 0x24495c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_244960:
    // 0x244960: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x244960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_244964:
    // 0x244964: 0xc044f78  jal         func_113DE0
label_244968:
    if (ctx->pc == 0x244968u) {
        ctx->pc = 0x24496Cu;
        goto label_24496c;
    }
    ctx->pc = 0x244964u;
    SET_GPR_U32(ctx, 31, 0x24496Cu);
    ctx->pc = 0x113DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113DE0u, 0x244964u, 0x24496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24496Cu;
label_24496c:
    // 0x24496c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_244970:
    // 0x244970: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x244970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_244974:
    // 0x244974: 0xc119c5c  jal         func_467170
label_244978:
    if (ctx->pc == 0x244978u) {
        ctx->pc = 0x24497Cu;
        goto label_24497c;
    }
    ctx->pc = 0x244974u;
    SET_GPR_U32(ctx, 31, 0x24497Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x244974u, 0x24497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24497Cu;
label_24497c:
    // 0x24497c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_244980:
    // 0x244980: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x244980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_244984:
    // 0x244984: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x244984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_244988:
    // 0x244988: 0xc0854ec  jal         func_2153B0
label_24498c:
    if (ctx->pc == 0x24498Cu) {
        ctx->pc = 0x244990u;
        goto label_244990;
    }
    ctx->pc = 0x244988u;
    SET_GPR_U32(ctx, 31, 0x244990u);
    ctx->pc = 0x2153B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2153B0u, 0x244988u, 0x244990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244990u;
label_244990:
    // 0x244990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244994:
    // 0x244994: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x244994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_244998:
    // 0x244998: 0x3e00008  jr          $ra
label_24499c:
    if (ctx->pc == 0x24499Cu) {
        ctx->pc = 0x2449A0u;
        goto label_2449a0;
    }
    ctx->pc = 0x244998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2449A0u;
label_2449a0:
    // 0x2449a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2449a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2449a4:
    // 0x2449a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2449a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2449a8:
    // 0x2449a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2449a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2449ac:
    // 0x2449ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2449acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2449b0:
    // 0x2449b0: 0xc0854f8  jal         func_2153E0
label_2449b4:
    if (ctx->pc == 0x2449B4u) {
        ctx->pc = 0x2449B8u;
        goto label_2449b8;
    }
    ctx->pc = 0x2449B0u;
    SET_GPR_U32(ctx, 31, 0x2449B8u);
    ctx->pc = 0x2153E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2153E0u, 0x2449B0u, 0x2449B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2449B8u;
label_2449b8:
    // 0x2449b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2449b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2449bc:
    // 0x2449bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2449bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2449c0:
    // 0x2449c0: 0x3e00008  jr          $ra
label_2449c4:
    if (ctx->pc == 0x2449C4u) {
        ctx->pc = 0x2449C8u;
        goto label_2449c8;
    }
    ctx->pc = 0x2449C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2449C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2449C8u;
label_2449c8:
    // 0x2449c8: 0x0  nop
    ctx->pc = 0x2449c8u;
    // NOP
label_2449cc:
    // 0x2449cc: 0x0  nop
    ctx->pc = 0x2449ccu;
    // NOP
label_2449d0:
    // 0x2449d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2449d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2449d4:
    // 0x2449d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2449d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2449d8:
    // 0x2449d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2449d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2449dc:
    // 0x2449dc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2449dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2449e0:
    // 0x2449e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2449e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2449e4:
    // 0x2449e4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2449e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2449e8:
    // 0x2449e8: 0xc0854f8  jal         func_2153E0
label_2449ec:
    if (ctx->pc == 0x2449ECu) {
        ctx->pc = 0x2449F0u;
        goto label_2449f0;
    }
    ctx->pc = 0x2449E8u;
    SET_GPR_U32(ctx, 31, 0x2449F0u);
    ctx->pc = 0x2153E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2153E0u, 0x2449E8u, 0x2449F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2449F0u;
label_2449f0:
    // 0x2449f0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2449f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2449f4:
    // 0x2449f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2449f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2449f8:
    // 0x2449f8: 0x10020051  beq         $zero, $v0, . + 4 + (0x51 << 2)
label_2449fc:
    if (ctx->pc == 0x2449FCu) {
        ctx->pc = 0x244A00u;
        goto label_244a00;
    }
    ctx->pc = 0x2449F8u;
    {
        const bool branch_taken_0x2449f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2449f8) {
            ctx->pc = 0x244B40u;
            goto label_244b40;
        }
    }
    ctx->pc = 0x244A00u;
label_244a00:
    // 0x244a00: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x244a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_244a04:
    // 0x244a04: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x244a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_244a08:
    // 0x244a08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x244a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_244a0c:
    // 0x244a0c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x244a0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_244a10:
    // 0x244a10: 0x320f809  jalr        $t9
label_244a14:
    if (ctx->pc == 0x244A14u) {
        ctx->pc = 0x244A18u;
        goto label_244a18;
    }
    ctx->pc = 0x244A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x244A18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244A10u, 0x244A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244A18u;
label_244a18:
    // 0x244a18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x244a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_244a1c:
    // 0x244a1c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x244a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_244a20:
    // 0x244a20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_244a24:
    if (ctx->pc == 0x244A24u) {
        ctx->pc = 0x244A28u;
        goto label_244a28;
    }
    ctx->pc = 0x244A20u;
    {
        const bool branch_taken_0x244a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244a20) {
            ctx->pc = 0x244A40u;
            goto label_244a40;
        }
    }
    ctx->pc = 0x244A28u;
label_244a28:
    // 0x244a28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x244a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_244a2c:
    // 0x244a2c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x244a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_244a30:
    // 0x244a30: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x244a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244a34:
    // 0x244a34: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x244a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_244a38:
    // 0x244a38: 0x10000004  b           . + 4 + (0x4 << 2)
label_244a3c:
    if (ctx->pc == 0x244A3Cu) {
        ctx->pc = 0x244A40u;
        goto label_244a40;
    }
    ctx->pc = 0x244A38u;
    {
        const bool branch_taken_0x244a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244a38) {
            ctx->pc = 0x244A4Cu;
            goto label_244a4c;
        }
    }
    ctx->pc = 0x244A40u;
label_244a40:
    // 0x244a40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x244a40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244a44:
    // 0x244a44: 0x0  nop
    ctx->pc = 0x244a44u;
    // NOP
label_244a48:
    // 0x244a48: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x244a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_244a4c:
    // 0x244a4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x244a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_244a50:
    // 0x244a50: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x244a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_244a54:
    // 0x244a54: 0x2405055f  addiu       $a1, $zero, 0x55F
    ctx->pc = 0x244a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1375));
label_244a58:
    // 0x244a58: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x244a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_244a5c:
    // 0x244a5c: 0xc041bc4  jal         func_106F10
label_244a60:
    if (ctx->pc == 0x244A60u) {
        ctx->pc = 0x244A64u;
        goto label_244a64;
    }
    ctx->pc = 0x244A5Cu;
    SET_GPR_U32(ctx, 31, 0x244A64u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x244A5Cu, 0x244A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A64u;
label_244a64:
    // 0x244a64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x244a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_244a68:
    // 0x244a68: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x244a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_244a6c:
    // 0x244a6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_244a70:
    if (ctx->pc == 0x244A70u) {
        ctx->pc = 0x244A74u;
        goto label_244a74;
    }
    ctx->pc = 0x244A6Cu;
    {
        const bool branch_taken_0x244a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244a6c) {
            ctx->pc = 0x244A8Cu;
            goto label_244a8c;
        }
    }
    ctx->pc = 0x244A74u;
label_244a74:
    // 0x244a74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x244a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_244a78:
    // 0x244a78: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x244a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_244a7c:
    // 0x244a7c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x244a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244a80:
    // 0x244a80: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x244a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_244a84:
    // 0x244a84: 0x10000004  b           . + 4 + (0x4 << 2)
label_244a88:
    if (ctx->pc == 0x244A88u) {
        ctx->pc = 0x244A8Cu;
        goto label_244a8c;
    }
    ctx->pc = 0x244A84u;
    {
        const bool branch_taken_0x244a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244a84) {
            ctx->pc = 0x244A98u;
            goto label_244a98;
        }
    }
    ctx->pc = 0x244A8Cu;
label_244a8c:
    // 0x244a8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x244a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244a90:
    // 0x244a90: 0x0  nop
    ctx->pc = 0x244a90u;
    // NOP
label_244a94:
    // 0x244a94: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x244a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_244a98:
    // 0x244a98: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x244a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_244a9c:
    // 0x244a9c: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x244a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_244aa0:
    // 0x244aa0: 0x24050560  addiu       $a1, $zero, 0x560
    ctx->pc = 0x244aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
label_244aa4:
    // 0x244aa4: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x244aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_244aa8:
    // 0x244aa8: 0xc041bc4  jal         func_106F10
label_244aac:
    if (ctx->pc == 0x244AACu) {
        ctx->pc = 0x244AB0u;
        goto label_244ab0;
    }
    ctx->pc = 0x244AA8u;
    SET_GPR_U32(ctx, 31, 0x244AB0u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x244AA8u, 0x244AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244AB0u;
label_244ab0:
    // 0x244ab0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x244ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_244ab4:
    // 0x244ab4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x244ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_244ab8:
    // 0x244ab8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_244abc:
    if (ctx->pc == 0x244ABCu) {
        ctx->pc = 0x244AC0u;
        goto label_244ac0;
    }
    ctx->pc = 0x244AB8u;
    {
        const bool branch_taken_0x244ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ab8) {
            ctx->pc = 0x244AD8u;
            goto label_244ad8;
        }
    }
    ctx->pc = 0x244AC0u;
label_244ac0:
    // 0x244ac0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x244ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_244ac4:
    // 0x244ac4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x244ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_244ac8:
    // 0x244ac8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x244ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244acc:
    // 0x244acc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x244accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_244ad0:
    // 0x244ad0: 0x10000004  b           . + 4 + (0x4 << 2)
label_244ad4:
    if (ctx->pc == 0x244AD4u) {
        ctx->pc = 0x244AD8u;
        goto label_244ad8;
    }
    ctx->pc = 0x244AD0u;
    {
        const bool branch_taken_0x244ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ad0) {
            ctx->pc = 0x244AE4u;
            goto label_244ae4;
        }
    }
    ctx->pc = 0x244AD8u;
label_244ad8:
    // 0x244ad8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x244ad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244adc:
    // 0x244adc: 0x0  nop
    ctx->pc = 0x244adcu;
    // NOP
label_244ae0:
    // 0x244ae0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x244ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_244ae4:
    // 0x244ae4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x244ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_244ae8:
    // 0x244ae8: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x244ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_244aec:
    // 0x244aec: 0x24050561  addiu       $a1, $zero, 0x561
    ctx->pc = 0x244aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1377));
label_244af0:
    // 0x244af0: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x244af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_244af4:
    // 0x244af4: 0xc041bc4  jal         func_106F10
label_244af8:
    if (ctx->pc == 0x244AF8u) {
        ctx->pc = 0x244AFCu;
        goto label_244afc;
    }
    ctx->pc = 0x244AF4u;
    SET_GPR_U32(ctx, 31, 0x244AFCu);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x244AF4u, 0x244AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244AFCu;
label_244afc:
    // 0x244afc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x244afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_244b00:
    // 0x244b00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x244b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_244b04:
    // 0x244b04: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
label_244b08:
    if (ctx->pc == 0x244B08u) {
        ctx->pc = 0x244B0Cu;
        goto label_244b0c;
    }
    ctx->pc = 0x244B04u;
    {
        const bool branch_taken_0x244b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x244b04) {
            ctx->pc = 0x244B24u;
            goto label_244b24;
        }
    }
    ctx->pc = 0x244B0Cu;
label_244b0c:
    // 0x244b0c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x244b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_244b10:
    // 0x244b10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x244b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_244b14:
    // 0x244b14: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x244b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_244b18:
    // 0x244b18: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x244b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_244b1c:
    // 0x244b1c: 0xc088fb4  jal         func_223ED0
label_244b20:
    if (ctx->pc == 0x244B20u) {
        ctx->pc = 0x244B24u;
        goto label_244b24;
    }
    ctx->pc = 0x244B1Cu;
    SET_GPR_U32(ctx, 31, 0x244B24u);
    ctx->pc = 0x223ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223ED0u, 0x244B1Cu, 0x244B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B24u;
label_244b24:
    // 0x244b24: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x244b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_244b28:
    // 0x244b28: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x244b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_244b2c:
    // 0x244b2c: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x244b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_244b30:
    // 0x244b30: 0x24050552  addiu       $a1, $zero, 0x552
    ctx->pc = 0x244b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1362));
label_244b34:
    // 0x244b34: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x244b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_244b38:
    // 0x244b38: 0xc0412cc  jal         func_104B30
label_244b3c:
    if (ctx->pc == 0x244B3Cu) {
        ctx->pc = 0x244B40u;
        goto label_244b40;
    }
    ctx->pc = 0x244B38u;
    SET_GPR_U32(ctx, 31, 0x244B40u);
    ctx->pc = 0x104B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B30u, 0x244B38u, 0x244B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B40u;
label_244b40:
    // 0x244b40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x244b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244b44:
    // 0x244b44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x244b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_244b48:
    // 0x244b48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x244b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_244b4c:
    // 0x244b4c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x244b4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_244b50:
    // 0x244b50: 0x3e00008  jr          $ra
label_244b54:
    if (ctx->pc == 0x244B54u) {
        ctx->pc = 0x244B58u;
        goto label_244b58;
    }
    ctx->pc = 0x244B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244B58u;
label_244b58:
    // 0x244b58: 0x0  nop
    ctx->pc = 0x244b58u;
    // NOP
label_244b5c:
    // 0x244b5c: 0x0  nop
    ctx->pc = 0x244b5cu;
    // NOP
    ctx->pc = 0x244b60u;
}
