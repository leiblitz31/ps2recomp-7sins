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

// Function: sub_003BF080
// Address: 0x3bf080 - 0x3bf408
void sub_003BF080_0x3bf080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF080_0x3bf080");
#endif

    switch (ctx->pc) {
        case 0x3bf080u: goto label_3bf080;
        case 0x3bf084u: goto label_3bf084;
        case 0x3bf088u: goto label_3bf088;
        case 0x3bf08cu: goto label_3bf08c;
        case 0x3bf090u: goto label_3bf090;
        case 0x3bf094u: goto label_3bf094;
        case 0x3bf098u: goto label_3bf098;
        case 0x3bf09cu: goto label_3bf09c;
        case 0x3bf0a0u: goto label_3bf0a0;
        case 0x3bf0a4u: goto label_3bf0a4;
        case 0x3bf0a8u: goto label_3bf0a8;
        case 0x3bf0acu: goto label_3bf0ac;
        case 0x3bf0b0u: goto label_3bf0b0;
        case 0x3bf0b4u: goto label_3bf0b4;
        case 0x3bf0b8u: goto label_3bf0b8;
        case 0x3bf0bcu: goto label_3bf0bc;
        case 0x3bf0c0u: goto label_3bf0c0;
        case 0x3bf0c4u: goto label_3bf0c4;
        case 0x3bf0c8u: goto label_3bf0c8;
        case 0x3bf0ccu: goto label_3bf0cc;
        case 0x3bf0d0u: goto label_3bf0d0;
        case 0x3bf0d4u: goto label_3bf0d4;
        case 0x3bf0d8u: goto label_3bf0d8;
        case 0x3bf0dcu: goto label_3bf0dc;
        case 0x3bf0e0u: goto label_3bf0e0;
        case 0x3bf0e4u: goto label_3bf0e4;
        case 0x3bf0e8u: goto label_3bf0e8;
        case 0x3bf0ecu: goto label_3bf0ec;
        case 0x3bf0f0u: goto label_3bf0f0;
        case 0x3bf0f4u: goto label_3bf0f4;
        case 0x3bf0f8u: goto label_3bf0f8;
        case 0x3bf0fcu: goto label_3bf0fc;
        case 0x3bf100u: goto label_3bf100;
        case 0x3bf104u: goto label_3bf104;
        case 0x3bf108u: goto label_3bf108;
        case 0x3bf10cu: goto label_3bf10c;
        case 0x3bf110u: goto label_3bf110;
        case 0x3bf114u: goto label_3bf114;
        case 0x3bf118u: goto label_3bf118;
        case 0x3bf11cu: goto label_3bf11c;
        case 0x3bf120u: goto label_3bf120;
        case 0x3bf124u: goto label_3bf124;
        case 0x3bf128u: goto label_3bf128;
        case 0x3bf12cu: goto label_3bf12c;
        case 0x3bf130u: goto label_3bf130;
        case 0x3bf134u: goto label_3bf134;
        case 0x3bf138u: goto label_3bf138;
        case 0x3bf13cu: goto label_3bf13c;
        case 0x3bf140u: goto label_3bf140;
        case 0x3bf144u: goto label_3bf144;
        case 0x3bf148u: goto label_3bf148;
        case 0x3bf14cu: goto label_3bf14c;
        case 0x3bf150u: goto label_3bf150;
        case 0x3bf154u: goto label_3bf154;
        case 0x3bf158u: goto label_3bf158;
        case 0x3bf15cu: goto label_3bf15c;
        case 0x3bf160u: goto label_3bf160;
        case 0x3bf164u: goto label_3bf164;
        case 0x3bf168u: goto label_3bf168;
        case 0x3bf16cu: goto label_3bf16c;
        case 0x3bf170u: goto label_3bf170;
        case 0x3bf174u: goto label_3bf174;
        case 0x3bf178u: goto label_3bf178;
        case 0x3bf17cu: goto label_3bf17c;
        case 0x3bf180u: goto label_3bf180;
        case 0x3bf184u: goto label_3bf184;
        case 0x3bf188u: goto label_3bf188;
        case 0x3bf18cu: goto label_3bf18c;
        case 0x3bf190u: goto label_3bf190;
        case 0x3bf194u: goto label_3bf194;
        case 0x3bf198u: goto label_3bf198;
        case 0x3bf19cu: goto label_3bf19c;
        case 0x3bf1a0u: goto label_3bf1a0;
        case 0x3bf1a4u: goto label_3bf1a4;
        case 0x3bf1a8u: goto label_3bf1a8;
        case 0x3bf1acu: goto label_3bf1ac;
        case 0x3bf1b0u: goto label_3bf1b0;
        case 0x3bf1b4u: goto label_3bf1b4;
        case 0x3bf1b8u: goto label_3bf1b8;
        case 0x3bf1bcu: goto label_3bf1bc;
        case 0x3bf1c0u: goto label_3bf1c0;
        case 0x3bf1c4u: goto label_3bf1c4;
        case 0x3bf1c8u: goto label_3bf1c8;
        case 0x3bf1ccu: goto label_3bf1cc;
        case 0x3bf1d0u: goto label_3bf1d0;
        case 0x3bf1d4u: goto label_3bf1d4;
        case 0x3bf1d8u: goto label_3bf1d8;
        case 0x3bf1dcu: goto label_3bf1dc;
        case 0x3bf1e0u: goto label_3bf1e0;
        case 0x3bf1e4u: goto label_3bf1e4;
        case 0x3bf1e8u: goto label_3bf1e8;
        case 0x3bf1ecu: goto label_3bf1ec;
        case 0x3bf1f0u: goto label_3bf1f0;
        case 0x3bf1f4u: goto label_3bf1f4;
        case 0x3bf1f8u: goto label_3bf1f8;
        case 0x3bf1fcu: goto label_3bf1fc;
        case 0x3bf200u: goto label_3bf200;
        case 0x3bf204u: goto label_3bf204;
        case 0x3bf208u: goto label_3bf208;
        case 0x3bf20cu: goto label_3bf20c;
        case 0x3bf210u: goto label_3bf210;
        case 0x3bf214u: goto label_3bf214;
        case 0x3bf218u: goto label_3bf218;
        case 0x3bf21cu: goto label_3bf21c;
        case 0x3bf220u: goto label_3bf220;
        case 0x3bf224u: goto label_3bf224;
        case 0x3bf228u: goto label_3bf228;
        case 0x3bf22cu: goto label_3bf22c;
        case 0x3bf230u: goto label_3bf230;
        case 0x3bf234u: goto label_3bf234;
        case 0x3bf238u: goto label_3bf238;
        case 0x3bf23cu: goto label_3bf23c;
        case 0x3bf240u: goto label_3bf240;
        case 0x3bf244u: goto label_3bf244;
        case 0x3bf248u: goto label_3bf248;
        case 0x3bf24cu: goto label_3bf24c;
        case 0x3bf250u: goto label_3bf250;
        case 0x3bf254u: goto label_3bf254;
        case 0x3bf258u: goto label_3bf258;
        case 0x3bf25cu: goto label_3bf25c;
        case 0x3bf260u: goto label_3bf260;
        case 0x3bf264u: goto label_3bf264;
        case 0x3bf268u: goto label_3bf268;
        case 0x3bf26cu: goto label_3bf26c;
        case 0x3bf270u: goto label_3bf270;
        case 0x3bf274u: goto label_3bf274;
        case 0x3bf278u: goto label_3bf278;
        case 0x3bf27cu: goto label_3bf27c;
        case 0x3bf280u: goto label_3bf280;
        case 0x3bf284u: goto label_3bf284;
        case 0x3bf288u: goto label_3bf288;
        case 0x3bf28cu: goto label_3bf28c;
        case 0x3bf290u: goto label_3bf290;
        case 0x3bf294u: goto label_3bf294;
        case 0x3bf298u: goto label_3bf298;
        case 0x3bf29cu: goto label_3bf29c;
        case 0x3bf2a0u: goto label_3bf2a0;
        case 0x3bf2a4u: goto label_3bf2a4;
        case 0x3bf2a8u: goto label_3bf2a8;
        case 0x3bf2acu: goto label_3bf2ac;
        case 0x3bf2b0u: goto label_3bf2b0;
        case 0x3bf2b4u: goto label_3bf2b4;
        case 0x3bf2b8u: goto label_3bf2b8;
        case 0x3bf2bcu: goto label_3bf2bc;
        case 0x3bf2c0u: goto label_3bf2c0;
        case 0x3bf2c4u: goto label_3bf2c4;
        case 0x3bf2c8u: goto label_3bf2c8;
        case 0x3bf2ccu: goto label_3bf2cc;
        case 0x3bf2d0u: goto label_3bf2d0;
        case 0x3bf2d4u: goto label_3bf2d4;
        case 0x3bf2d8u: goto label_3bf2d8;
        case 0x3bf2dcu: goto label_3bf2dc;
        case 0x3bf2e0u: goto label_3bf2e0;
        case 0x3bf2e4u: goto label_3bf2e4;
        case 0x3bf2e8u: goto label_3bf2e8;
        case 0x3bf2ecu: goto label_3bf2ec;
        case 0x3bf2f0u: goto label_3bf2f0;
        case 0x3bf2f4u: goto label_3bf2f4;
        case 0x3bf2f8u: goto label_3bf2f8;
        case 0x3bf2fcu: goto label_3bf2fc;
        case 0x3bf300u: goto label_3bf300;
        case 0x3bf304u: goto label_3bf304;
        case 0x3bf308u: goto label_3bf308;
        case 0x3bf30cu: goto label_3bf30c;
        case 0x3bf310u: goto label_3bf310;
        case 0x3bf314u: goto label_3bf314;
        case 0x3bf318u: goto label_3bf318;
        case 0x3bf31cu: goto label_3bf31c;
        case 0x3bf320u: goto label_3bf320;
        case 0x3bf324u: goto label_3bf324;
        case 0x3bf328u: goto label_3bf328;
        case 0x3bf32cu: goto label_3bf32c;
        case 0x3bf330u: goto label_3bf330;
        case 0x3bf334u: goto label_3bf334;
        case 0x3bf338u: goto label_3bf338;
        case 0x3bf33cu: goto label_3bf33c;
        case 0x3bf340u: goto label_3bf340;
        case 0x3bf344u: goto label_3bf344;
        case 0x3bf348u: goto label_3bf348;
        case 0x3bf34cu: goto label_3bf34c;
        case 0x3bf350u: goto label_3bf350;
        case 0x3bf354u: goto label_3bf354;
        case 0x3bf358u: goto label_3bf358;
        case 0x3bf35cu: goto label_3bf35c;
        case 0x3bf360u: goto label_3bf360;
        case 0x3bf364u: goto label_3bf364;
        case 0x3bf368u: goto label_3bf368;
        case 0x3bf36cu: goto label_3bf36c;
        case 0x3bf370u: goto label_3bf370;
        case 0x3bf374u: goto label_3bf374;
        case 0x3bf378u: goto label_3bf378;
        case 0x3bf37cu: goto label_3bf37c;
        case 0x3bf380u: goto label_3bf380;
        case 0x3bf384u: goto label_3bf384;
        case 0x3bf388u: goto label_3bf388;
        case 0x3bf38cu: goto label_3bf38c;
        case 0x3bf390u: goto label_3bf390;
        case 0x3bf394u: goto label_3bf394;
        case 0x3bf398u: goto label_3bf398;
        case 0x3bf39cu: goto label_3bf39c;
        case 0x3bf3a0u: goto label_3bf3a0;
        case 0x3bf3a4u: goto label_3bf3a4;
        case 0x3bf3a8u: goto label_3bf3a8;
        case 0x3bf3acu: goto label_3bf3ac;
        case 0x3bf3b0u: goto label_3bf3b0;
        case 0x3bf3b4u: goto label_3bf3b4;
        case 0x3bf3b8u: goto label_3bf3b8;
        case 0x3bf3bcu: goto label_3bf3bc;
        case 0x3bf3c0u: goto label_3bf3c0;
        case 0x3bf3c4u: goto label_3bf3c4;
        case 0x3bf3c8u: goto label_3bf3c8;
        case 0x3bf3ccu: goto label_3bf3cc;
        case 0x3bf3d0u: goto label_3bf3d0;
        case 0x3bf3d4u: goto label_3bf3d4;
        case 0x3bf3d8u: goto label_3bf3d8;
        case 0x3bf3dcu: goto label_3bf3dc;
        case 0x3bf3e0u: goto label_3bf3e0;
        case 0x3bf3e4u: goto label_3bf3e4;
        case 0x3bf3e8u: goto label_3bf3e8;
        case 0x3bf3ecu: goto label_3bf3ec;
        case 0x3bf3f0u: goto label_3bf3f0;
        case 0x3bf3f4u: goto label_3bf3f4;
        case 0x3bf3f8u: goto label_3bf3f8;
        case 0x3bf3fcu: goto label_3bf3fc;
        case 0x3bf400u: goto label_3bf400;
        case 0x3bf404u: goto label_3bf404;
        default: break;
    }

    ctx->pc = 0x3bf080u;

label_3bf080:
    // 0x3bf080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bf080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3bf084:
    // 0x3bf084: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3bf084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3bf088:
    // 0x3bf088: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3bf088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3bf08c:
    // 0x3bf08c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3bf08cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3bf090:
    // 0x3bf090: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bf090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3bf094:
    // 0x3bf094: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x3bf094u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
label_3bf098:
    // 0x3bf098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bf098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bf09c:
    // 0x3bf09c: 0x2651b180  addiu       $s1, $s2, -0x4E80
    ctx->pc = 0x3bf09cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294947200));
label_3bf0a0:
    // 0x3bf0a0: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x3bf0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3bf0a4:
    // 0x3bf0a4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x3bf0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3bf0a8:
    // 0x3bf0a8: 0x40f809  jalr        $v0
label_3bf0ac:
    if (ctx->pc == 0x3BF0ACu) {
        ctx->pc = 0x3BF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF0A8u;
        // 0x3bf0ac: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF0B0u;
        goto label_3bf0b0;
    }
    ctx->pc = 0x3BF0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BF0B0u);
        ctx->pc = 0x3BF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF0A8u;
        // 0x3bf0ac: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF0A8u, 0x3BF0B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF0B0u;
label_3bf0b0:
    // 0x3bf0b0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x3bf0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3bf0b4:
    // 0x3bf0b4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3bf0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3bf0b8:
    // 0x3bf0b8: 0x60f809  jalr        $v1
label_3bf0bc:
    if (ctx->pc == 0x3BF0BCu) {
        ctx->pc = 0x3BF0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF0B8u;
        // 0x3bf0bc: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF0C0u;
        goto label_3bf0c0;
    }
    ctx->pc = 0x3BF0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3BF0C0u);
        ctx->pc = 0x3BF0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF0B8u;
        // 0x3bf0bc: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF0B8u, 0x3BF0C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF0C0u;
label_3bf0c0:
    // 0x3bf0c0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3bf0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3bf0c4:
    // 0x3bf0c4: 0xae40b180  sw          $zero, -0x4E80($s2)
    ctx->pc = 0x3bf0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294947200), GPR_U32(ctx, 0));
label_3bf0c8:
    // 0x3bf0c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3bf0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bf0cc:
    // 0x3bf0cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3bf0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bf0d0:
    // 0x3bf0d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3bf0d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bf0d4:
    // 0x3bf0d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bf0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bf0d8:
    // 0x3bf0d8: 0x3e00008  jr          $ra
label_3bf0dc:
    if (ctx->pc == 0x3BF0DCu) {
        ctx->pc = 0x3BF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF0D8u;
        // 0x3bf0dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF0E0u;
        goto label_3bf0e0;
    }
    ctx->pc = 0x3BF0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF0D8u;
        // 0x3bf0dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF0E0u;
label_3bf0e0:
    // 0x3bf0e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3bf0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3bf0e4:
    // 0x3bf0e4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3bf0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3bf0e8:
    // 0x3bf0e8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3bf0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3bf0ec:
    // 0x3bf0ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bf0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bf0f0:
    // 0x3bf0f0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3bf0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3bf0f4:
    // 0x3bf0f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3bf0f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bf0f8:
    // 0x3bf0f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3bf0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3bf0fc:
    // 0x3bf0fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3bf0fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bf100:
    // 0x3bf100: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3bf100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3bf104:
    // 0x3bf104: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3bf104u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bf108:
    // 0x3bf108: 0x12200040  beqz        $s1, . + 4 + (0x40 << 2)
label_3bf10c:
    if (ctx->pc == 0x3BF10Cu) {
        ctx->pc = 0x3BF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF108u;
        // 0x3bf10c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF110u;
        goto label_3bf110;
    }
    ctx->pc = 0x3BF108u;
    {
        const bool branch_taken_0x3bf108 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF108u;
        // 0x3bf10c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf108) {
            ctx->pc = 0x3BF20Cu;
            goto label_3bf20c;
        }
    }
    ctx->pc = 0x3BF110u;
label_3bf110:
    // 0x3bf110: 0x1260003f  beqz        $s3, . + 4 + (0x3F << 2)
label_3bf114:
    if (ctx->pc == 0x3BF114u) {
        ctx->pc = 0x3BF114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF110u;
        // 0x3bf114: 0x24020180  addiu       $v0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF118u;
        goto label_3bf118;
    }
    ctx->pc = 0x3BF110u;
    {
        const bool branch_taken_0x3bf110 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF110u;
        // 0x3bf114: 0x24020180  addiu       $v0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf110) {
            ctx->pc = 0x3BF210u;
            goto label_3bf210;
        }
    }
    ctx->pc = 0x3BF118u;
label_3bf118:
    // 0x3bf118: 0x1240003c  beqz        $s2, . + 4 + (0x3C << 2)
label_3bf11c:
    if (ctx->pc == 0x3BF11Cu) {
        ctx->pc = 0x3BF11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF118u;
        // 0x3bf11c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF120u;
        goto label_3bf120;
    }
    ctx->pc = 0x3BF118u;
    {
        const bool branch_taken_0x3bf118 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF118u;
        // 0x3bf11c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf118) {
            ctx->pc = 0x3BF20Cu;
            goto label_3bf20c;
        }
    }
    ctx->pc = 0x3BF120u;
label_3bf120:
    // 0x3bf120: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3bf120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3bf124:
    // 0x3bf124: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3bf124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3bf128:
    // 0x3bf128: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3bf128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3bf12c:
    // 0x3bf12c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3bf12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3bf130:
    // 0x3bf130: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x3bf130u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3bf134:
    // 0x3bf134: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3bf134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_3bf138:
    // 0x3bf138: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x3bf138u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3bf13c:
    // 0x3bf13c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x3bf13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_3bf140:
    // 0x3bf140: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3bf140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3bf144:
    // 0x3bf144: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x3bf144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
label_3bf148:
    // 0x3bf148: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x3bf148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3bf14c:
    // 0x3bf14c: 0x2409000f  addiu       $t1, $zero, 0xF
    ctx->pc = 0x3bf14cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3bf150:
    // 0x3bf150: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3bf150u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3bf154:
    // 0x3bf154: 0x0  nop
    ctx->pc = 0x3bf154u;
    // NOP
label_3bf158:
    // 0x3bf158: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_3bf15c:
    if (ctx->pc == 0x3BF15Cu) {
        ctx->pc = 0x3BF15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF158u;
        // 0x3bf15c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF160u;
        goto label_3bf160;
    }
    ctx->pc = 0x3BF158u;
    {
        const bool branch_taken_0x3bf158 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf158) {
            ctx->pc = 0x3BF15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF158u;
            // 0x3bf15c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF160u;
            goto label_3bf160;
        }
    }
    ctx->pc = 0x3BF160u;
label_3bf160:
    // 0x3bf160: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x3bf160u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3bf164:
    // 0x3bf164: 0x2012  mflo        $a0
    ctx->pc = 0x3bf164u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3bf168:
    // 0x3bf168: 0x2483005a  addiu       $v1, $a0, 0x5A
    ctx->pc = 0x3bf168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 90));
label_3bf16c:
    // 0x3bf16c: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x3bf16cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3bf170:
    // 0x3bf170: 0x1812  mflo        $v1
    ctx->pc = 0x3bf170u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_3bf174:
    // 0x3bf174: 0x691018  mult        $v0, $v1, $t1
    ctx->pc = 0x3bf174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3bf178:
    // 0x3bf178: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x3bf178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3bf17c:
    // 0x3bf17c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_3bf180:
    if (ctx->pc == 0x3BF180u) {
        ctx->pc = 0x3BF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF17Cu;
        // 0x3bf180: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF184u;
        goto label_3bf184;
    }
    ctx->pc = 0x3BF17Cu;
    {
        const bool branch_taken_0x3bf17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf17c) {
            ctx->pc = 0x3BF180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF17Cu;
            // 0x3bf180: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf158;
        }
    }
    ctx->pc = 0x3BF184u;
label_3bf184:
    // 0x3bf184: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x3bf184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_3bf188:
    // 0x3bf188: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x3bf188u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
label_3bf18c:
    // 0x3bf18c: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x3bf18cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
label_3bf190:
    // 0x3bf190: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3bf190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3bf194:
    // 0x3bf194: 0xad040014  sw          $a0, 0x14($t0)
    ctx->pc = 0x3bf194u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 4));
label_3bf198:
    // 0x3bf198: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x3bf198u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
label_3bf19c:
    // 0x3bf19c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x3bf19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3bf1a0:
    // 0x3bf1a0: 0xc107034  jal         func_41C0D0
label_3bf1a4:
    if (ctx->pc == 0x3BF1A4u) {
        ctx->pc = 0x3BF1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF1A0u;
        // 0x3bf1a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF1A8u;
        goto label_3bf1a8;
    }
    ctx->pc = 0x3BF1A0u;
    SET_GPR_U32(ctx, 31, 0x3BF1A8u);
    ctx->pc = 0x3BF1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF1A0u;
    // 0x3bf1a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x3BF1A0u, 0x3BF1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF1A8u;
label_3bf1a8:
    // 0x3bf1a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3bf1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bf1ac:
    // 0x3bf1ac: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_3bf1b0:
    if (ctx->pc == 0x3BF1B0u) {
        ctx->pc = 0x3BF1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF1ACu;
        // 0x3bf1b0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF1B4u;
        goto label_3bf1b4;
    }
    ctx->pc = 0x3BF1ACu;
    {
        const bool branch_taken_0x3bf1ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF1ACu;
        // 0x3bf1b0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf1ac) {
            ctx->pc = 0x3BF230u;
            goto label_3bf230;
        }
    }
    ctx->pc = 0x3BF1B4u;
label_3bf1b4:
    // 0x3bf1b4: 0xc107078  jal         func_41C1E0
label_3bf1b8:
    if (ctx->pc == 0x3BF1B8u) {
        ctx->pc = 0x3BF1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF1B4u;
        // 0x3bf1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF1BCu;
        goto label_3bf1bc;
    }
    ctx->pc = 0x3BF1B4u;
    SET_GPR_U32(ctx, 31, 0x3BF1BCu);
    ctx->pc = 0x3BF1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF1B4u;
    // 0x3bf1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x3BF1B4u, 0x3BF1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF1BCu;
label_3bf1bc:
    // 0x3bf1bc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3bf1c0:
    if (ctx->pc == 0x3BF1C0u) {
        ctx->pc = 0x3BF1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF1BCu;
        // 0x3bf1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF1C4u;
        goto label_3bf1c4;
    }
    ctx->pc = 0x3BF1BCu;
    {
        const bool branch_taken_0x3bf1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF1BCu;
        // 0x3bf1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf1bc) {
            ctx->pc = 0x3BF1FCu;
            goto label_3bf1fc;
        }
    }
    ctx->pc = 0x3BF1C4u;
label_3bf1c4:
    // 0x3bf1c4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3bf1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3bf1c8:
    // 0x3bf1c8: 0x8a430003  lwl         $v1, 0x3($s2)
    ctx->pc = 0x3bf1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_3bf1cc:
    // 0x3bf1cc: 0x9a430000  lwr         $v1, 0x0($s2)
    ctx->pc = 0x3bf1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_3bf1d0:
    // 0x3bf1d0: 0xa8430003  swl         $v1, 0x3($v0)
    ctx->pc = 0x3bf1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3bf1d4:
    // 0x3bf1d4: 0xb8430000  swr         $v1, 0x0($v0)
    ctx->pc = 0x3bf1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3bf1d8:
    // 0x3bf1d8: 0x8a630003  lwl         $v1, 0x3($s3)
    ctx->pc = 0x3bf1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_3bf1dc:
    // 0x3bf1dc: 0x9a630000  lwr         $v1, 0x0($s3)
    ctx->pc = 0x3bf1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_3bf1e0:
    // 0x3bf1e0: 0xa8430007  swl         $v1, 0x7($v0)
    ctx->pc = 0x3bf1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3bf1e4:
    // 0x3bf1e4: 0xb8430004  swr         $v1, 0x4($v0)
    ctx->pc = 0x3bf1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3bf1e8:
    // 0x3bf1e8: 0xc0efade  jal         func_3BEB78
label_3bf1ec:
    if (ctx->pc == 0x3BF1ECu) {
        ctx->pc = 0x3BF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF1E8u;
        // 0x3bf1ec: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF1F0u;
        goto label_3bf1f0;
    }
    ctx->pc = 0x3BF1E8u;
    SET_GPR_U32(ctx, 31, 0x3BF1F0u);
    ctx->pc = 0x3BF1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF1E8u;
    // 0x3bf1ec: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB78u, 0x3BF1E8u, 0x3BF1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF1F0u;
label_3bf1f0:
    // 0x3bf1f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3bf1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bf1f4:
    // 0x3bf1f4: 0xc1073c2  jal         func_41CF08
label_3bf1f8:
    if (ctx->pc == 0x3BF1F8u) {
        ctx->pc = 0x3BF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF1F4u;
        // 0x3bf1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF1FCu;
        goto label_3bf1fc;
    }
    ctx->pc = 0x3BF1F4u;
    SET_GPR_U32(ctx, 31, 0x3BF1FCu);
    ctx->pc = 0x3BF1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF1F4u;
    // 0x3bf1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x3BF1F4u, 0x3BF1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF1FCu;
label_3bf1fc:
    // 0x3bf1fc: 0xc10705c  jal         func_41C170
label_3bf200:
    if (ctx->pc == 0x3BF200u) {
        ctx->pc = 0x3BF200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF1FCu;
        // 0x3bf200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF204u;
        goto label_3bf204;
    }
    ctx->pc = 0x3BF1FCu;
    SET_GPR_U32(ctx, 31, 0x3BF204u);
    ctx->pc = 0x3BF200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF1FCu;
    // 0x3bf200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3BF1FCu, 0x3BF204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF204u;
label_3bf204:
    // 0x3bf204: 0x1000000a  b           . + 4 + (0xA << 2)
label_3bf208:
    if (ctx->pc == 0x3BF208u) {
        ctx->pc = 0x3BF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF204u;
        // 0x3bf208: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF20Cu;
        goto label_3bf20c;
    }
    ctx->pc = 0x3BF204u;
    {
        const bool branch_taken_0x3bf204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF204u;
        // 0x3bf208: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf204) {
            ctx->pc = 0x3BF230u;
            goto label_3bf230;
        }
    }
    ctx->pc = 0x3BF20Cu;
label_3bf20c:
    // 0x3bf20c: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x3bf20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_3bf210:
    // 0x3bf210: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3bf210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3bf214:
    // 0x3bf214: 0x34840016  ori         $a0, $a0, 0x16
    ctx->pc = 0x3bf214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
label_3bf218:
    // 0x3bf218: 0xc1035f6  jal         func_40D7D8
label_3bf21c:
    if (ctx->pc == 0x3BF21Cu) {
        ctx->pc = 0x3BF21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF218u;
        // 0x3bf21c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF220u;
        goto label_3bf220;
    }
    ctx->pc = 0x3BF218u;
    SET_GPR_U32(ctx, 31, 0x3BF220u);
    ctx->pc = 0x3BF21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF218u;
    // 0x3bf21c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BF218u, 0x3BF220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF220u;
label_3bf220:
    // 0x3bf220: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3bf220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_3bf224:
    // 0x3bf224: 0xc103628  jal         func_40D8A0
label_3bf228:
    if (ctx->pc == 0x3BF228u) {
        ctx->pc = 0x3BF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF224u;
        // 0x3bf228: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF22Cu;
        goto label_3bf22c;
    }
    ctx->pc = 0x3BF224u;
    SET_GPR_U32(ctx, 31, 0x3BF22Cu);
    ctx->pc = 0x3BF228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF224u;
    // 0x3bf228: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3BF224u, 0x3BF22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF22Cu;
label_3bf22c:
    // 0x3bf22c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3bf22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3bf230:
    // 0x3bf230: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3bf230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3bf234:
    // 0x3bf234: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3bf234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3bf238:
    // 0x3bf238: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3bf238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3bf23c:
    // 0x3bf23c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3bf23cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3bf240:
    // 0x3bf240: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3bf240u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3bf244:
    // 0x3bf244: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bf244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3bf248:
    // 0x3bf248: 0x3e00008  jr          $ra
label_3bf24c:
    if (ctx->pc == 0x3BF24Cu) {
        ctx->pc = 0x3BF24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF248u;
        // 0x3bf24c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF250u;
        goto label_3bf250;
    }
    ctx->pc = 0x3BF248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF248u;
        // 0x3bf24c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF250u;
label_3bf250:
    // 0x3bf250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bf250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3bf254:
    // 0x3bf254: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3bf254u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bf258:
    // 0x3bf258: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bf258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3bf25c:
    // 0x3bf25c: 0x11400022  beqz        $t2, . + 4 + (0x22 << 2)
label_3bf260:
    if (ctx->pc == 0x3BF260u) {
        ctx->pc = 0x3BF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF25Cu;
        // 0x3bf260: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF264u;
        goto label_3bf264;
    }
    ctx->pc = 0x3BF25Cu;
    {
        const bool branch_taken_0x3bf25c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF25Cu;
        // 0x3bf260: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf25c) {
            ctx->pc = 0x3BF2E8u;
            goto label_3bf2e8;
        }
    }
    ctx->pc = 0x3BF264u;
label_3bf264:
    // 0x3bf264: 0x10e00020  beqz        $a3, . + 4 + (0x20 << 2)
label_3bf268:
    if (ctx->pc == 0x3BF268u) {
        ctx->pc = 0x3BF268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF264u;
        // 0x3bf268: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF26Cu;
        goto label_3bf26c;
    }
    ctx->pc = 0x3BF264u;
    {
        const bool branch_taken_0x3bf264 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF264u;
        // 0x3bf268: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf264) {
            ctx->pc = 0x3BF2E8u;
            goto label_3bf2e8;
        }
    }
    ctx->pc = 0x3BF26Cu;
label_3bf26c:
    // 0x3bf26c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3bf26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3bf270:
    // 0x3bf270: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3bf270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3bf274:
    // 0x3bf274: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3bf274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3bf278:
    // 0x3bf278: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3bf278u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_3bf27c:
    // 0x3bf27c: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x3bf27cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3bf280:
    // 0x3bf280: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x3bf280u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_3bf284:
    // 0x3bf284: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3bf284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3bf288:
    // 0x3bf288: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x3bf288u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_3bf28c:
    // 0x3bf28c: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x3bf28cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3bf290:
    // 0x3bf290: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x3bf290u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
label_3bf294:
    // 0x3bf294: 0x2409000f  addiu       $t1, $zero, 0xF
    ctx->pc = 0x3bf294u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3bf298:
    // 0x3bf298: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3bf298u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_3bf29c:
    // 0x3bf29c: 0x0  nop
    ctx->pc = 0x3bf29cu;
    // NOP
label_3bf2a0:
    // 0x3bf2a0: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
label_3bf2a4:
    if (ctx->pc == 0x3BF2A4u) {
        ctx->pc = 0x3BF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF2A0u;
        // 0x3bf2a4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF2A8u;
        goto label_3bf2a8;
    }
    ctx->pc = 0x3BF2A0u;
    {
        const bool branch_taken_0x3bf2a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf2a0) {
            ctx->pc = 0x3BF2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF2A0u;
            // 0x3bf2a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF2A8u;
            goto label_3bf2a8;
        }
    }
    ctx->pc = 0x3BF2A8u;
label_3bf2a8:
    // 0x3bf2a8: 0xc8001a  div         $zero, $a2, $t0
    ctx->pc = 0x3bf2a8u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3bf2ac:
    // 0x3bf2ac: 0x2012  mflo        $a0
    ctx->pc = 0x3bf2acu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3bf2b0:
    // 0x3bf2b0: 0x2483005a  addiu       $v1, $a0, 0x5A
    ctx->pc = 0x3bf2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 90));
label_3bf2b4:
    // 0x3bf2b4: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x3bf2b4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3bf2b8:
    // 0x3bf2b8: 0x1812  mflo        $v1
    ctx->pc = 0x3bf2b8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_3bf2bc:
    // 0x3bf2bc: 0x691018  mult        $v0, $v1, $t1
    ctx->pc = 0x3bf2bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3bf2c0:
    // 0x3bf2c0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3bf2c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3bf2c4:
    // 0x3bf2c4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_3bf2c8:
    if (ctx->pc == 0x3BF2C8u) {
        ctx->pc = 0x3BF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF2C4u;
        // 0x3bf2c8: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF2CCu;
        goto label_3bf2cc;
    }
    ctx->pc = 0x3BF2C4u;
    {
        const bool branch_taken_0x3bf2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf2c4) {
            ctx->pc = 0x3BF2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF2C4u;
            // 0x3bf2c8: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf2a0;
        }
    }
    ctx->pc = 0x3BF2CCu;
label_3bf2cc:
    // 0x3bf2cc: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x3bf2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_3bf2d0:
    // 0x3bf2d0: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x3bf2d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3bf2d4:
    // 0x3bf2d4: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x3bf2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
label_3bf2d8:
    // 0x3bf2d8: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x3bf2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_3bf2dc:
    // 0x3bf2dc: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x3bf2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
label_3bf2e0:
    // 0x3bf2e0: 0x1000000b  b           . + 4 + (0xB << 2)
label_3bf2e4:
    if (ctx->pc == 0x3BF2E4u) {
        ctx->pc = 0x3BF2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF2E0u;
        // 0x3bf2e4: 0xace40014  sw          $a0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF2E8u;
        goto label_3bf2e8;
    }
    ctx->pc = 0x3BF2E0u;
    {
        const bool branch_taken_0x3bf2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF2E0u;
        // 0x3bf2e4: 0xace40014  sw          $a0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf2e0) {
            ctx->pc = 0x3BF310u;
            goto label_3bf310;
        }
    }
    ctx->pc = 0x3BF2E8u;
label_3bf2e8:
    // 0x3bf2e8: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x3bf2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_3bf2ec:
    // 0x3bf2ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3bf2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3bf2f0:
    // 0x3bf2f0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3bf2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3bf2f4:
    // 0x3bf2f4: 0xc1035f6  jal         func_40D7D8
label_3bf2f8:
    if (ctx->pc == 0x3BF2F8u) {
        ctx->pc = 0x3BF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF2F4u;
        // 0x3bf2f8: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF2FCu;
        goto label_3bf2fc;
    }
    ctx->pc = 0x3BF2F4u;
    SET_GPR_U32(ctx, 31, 0x3BF2FCu);
    ctx->pc = 0x3BF2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF2F4u;
    // 0x3bf2f8: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BF2F4u, 0x3BF2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF2FCu;
label_3bf2fc:
    // 0x3bf2fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bf2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3bf300:
    // 0x3bf300: 0xc103628  jal         func_40D8A0
label_3bf304:
    if (ctx->pc == 0x3BF304u) {
        ctx->pc = 0x3BF304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF300u;
        // 0x3bf304: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF308u;
        goto label_3bf308;
    }
    ctx->pc = 0x3BF300u;
    SET_GPR_U32(ctx, 31, 0x3BF308u);
    ctx->pc = 0x3BF304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF300u;
    // 0x3bf304: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3BF300u, 0x3BF308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF308u;
label_3bf308:
    // 0x3bf308: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bf308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bf30c:
    // 0x3bf30c: 0x0  nop
    ctx->pc = 0x3bf30cu;
    // NOP
label_3bf310:
    // 0x3bf310: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bf310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3bf314:
    // 0x3bf314: 0x3e00008  jr          $ra
label_3bf318:
    if (ctx->pc == 0x3BF318u) {
        ctx->pc = 0x3BF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF314u;
        // 0x3bf318: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF31Cu;
        goto label_3bf31c;
    }
    ctx->pc = 0x3BF314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF314u;
        // 0x3bf318: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF31Cu;
label_3bf31c:
    // 0x3bf31c: 0x0  nop
    ctx->pc = 0x3bf31cu;
    // NOP
label_3bf320:
    // 0x3bf320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bf320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3bf324:
    // 0x3bf324: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_3bf328:
    if (ctx->pc == 0x3BF328u) {
        ctx->pc = 0x3BF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF324u;
        // 0x3bf328: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF32Cu;
        goto label_3bf32c;
    }
    ctx->pc = 0x3BF324u;
    {
        const bool branch_taken_0x3bf324 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF324u;
        // 0x3bf328: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf324) {
            ctx->pc = 0x3BF354u;
            goto label_3bf354;
        }
    }
    ctx->pc = 0x3BF32Cu;
label_3bf32c:
    // 0x3bf32c: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x3bf32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_3bf330:
    // 0x3bf330: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3bf330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3bf334:
    // 0x3bf334: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3bf334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3bf338:
    // 0x3bf338: 0xc1035f6  jal         func_40D7D8
label_3bf33c:
    if (ctx->pc == 0x3BF33Cu) {
        ctx->pc = 0x3BF33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF338u;
        // 0x3bf33c: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF340u;
        goto label_3bf340;
    }
    ctx->pc = 0x3BF338u;
    SET_GPR_U32(ctx, 31, 0x3BF340u);
    ctx->pc = 0x3BF33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF338u;
    // 0x3bf33c: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BF338u, 0x3BF340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF340u;
label_3bf340:
    // 0x3bf340: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bf340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3bf344:
    // 0x3bf344: 0xc103628  jal         func_40D8A0
label_3bf348:
    if (ctx->pc == 0x3BF348u) {
        ctx->pc = 0x3BF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF344u;
        // 0x3bf348: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF34Cu;
        goto label_3bf34c;
    }
    ctx->pc = 0x3BF344u;
    SET_GPR_U32(ctx, 31, 0x3BF34Cu);
    ctx->pc = 0x3BF348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF344u;
    // 0x3bf348: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3BF344u, 0x3BF34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF34Cu;
label_3bf34c:
    // 0x3bf34c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3bf350:
    if (ctx->pc == 0x3BF350u) {
        ctx->pc = 0x3BF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF34Cu;
        // 0x3bf350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF354u;
        goto label_3bf354;
    }
    ctx->pc = 0x3BF34Cu;
    {
        const bool branch_taken_0x3bf34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF34Cu;
        // 0x3bf350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf34c) {
            ctx->pc = 0x3BF360u;
            goto label_3bf360;
        }
    }
    ctx->pc = 0x3BF354u;
label_3bf354:
    // 0x3bf354: 0xc1074ac  jal         func_41D2B0
label_3bf358:
    if (ctx->pc == 0x3BF358u) {
        ctx->pc = 0x3BF35Cu;
        goto label_3bf35c;
    }
    ctx->pc = 0x3BF354u;
    SET_GPR_U32(ctx, 31, 0x3BF35Cu);
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x3BF354u, 0x3BF35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF35Cu;
label_3bf35c:
    // 0x3bf35c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bf35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bf360:
    // 0x3bf360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bf360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3bf364:
    // 0x3bf364: 0x3e00008  jr          $ra
label_3bf368:
    if (ctx->pc == 0x3BF368u) {
        ctx->pc = 0x3BF368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF364u;
        // 0x3bf368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF36Cu;
        goto label_3bf36c;
    }
    ctx->pc = 0x3BF364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF364u;
        // 0x3bf368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF36Cu;
label_3bf36c:
    // 0x3bf36c: 0x0  nop
    ctx->pc = 0x3bf36cu;
    // NOP
label_3bf370:
    // 0x3bf370: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3bf370u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bf374:
    // 0x3bf374: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x3bf374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3bf378:
    // 0x3bf378: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3bf378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3bf37c:
    // 0x3bf37c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3bf37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3bf380:
    // 0x3bf380: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3bf380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3bf384:
    // 0x3bf384: 0xad06000c  sw          $a2, 0xC($t0)
    ctx->pc = 0x3bf384u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
label_3bf388:
    // 0x3bf388: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3bf388u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_3bf38c:
    // 0x3bf38c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3bf38cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bf390:
    // 0x3bf390: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x3bf390u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_3bf394:
    // 0x3bf394: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3bf394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3bf398:
    // 0x3bf398: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x3bf398u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
label_3bf39c:
    // 0x3bf39c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x3bf39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3bf3a0:
    // 0x3bf3a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3bf3a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bf3a4:
    // 0x3bf3a4: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x3bf3a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3bf3a8:
    // 0x3bf3a8: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3bf3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3bf3ac:
    // 0x3bf3ac: 0x0  nop
    ctx->pc = 0x3bf3acu;
    // NOP
label_3bf3b0:
    // 0x3bf3b0: 0x50c90001  beql        $a2, $t1, . + 4 + (0x1 << 2)
label_3bf3b4:
    if (ctx->pc == 0x3BF3B4u) {
        ctx->pc = 0x3BF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3B0u;
        // 0x3bf3b4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF3B8u;
        goto label_3bf3b8;
    }
    ctx->pc = 0x3BF3B0u;
    {
        const bool branch_taken_0x3bf3b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x3bf3b0) {
            ctx->pc = 0x3BF3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF3B0u;
            // 0x3bf3b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF3B8u;
            goto label_3bf3b8;
        }
    }
    ctx->pc = 0x3BF3B8u;
label_3bf3b8:
    // 0x3bf3b8: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x3bf3b8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3bf3bc:
    // 0x3bf3bc: 0x2012  mflo        $a0
    ctx->pc = 0x3bf3bcu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3bf3c0:
    // 0x3bf3c0: 0x2483005a  addiu       $v1, $a0, 0x5A
    ctx->pc = 0x3bf3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 90));
label_3bf3c4:
    // 0x3bf3c4: 0x50890001  beql        $a0, $t1, . + 4 + (0x1 << 2)
label_3bf3c8:
    if (ctx->pc == 0x3BF3C8u) {
        ctx->pc = 0x3BF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3C4u;
        // 0x3bf3c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF3CCu;
        goto label_3bf3cc;
    }
    ctx->pc = 0x3BF3C4u;
    {
        const bool branch_taken_0x3bf3c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        if (branch_taken_0x3bf3c4) {
            ctx->pc = 0x3BF3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF3C4u;
            // 0x3bf3c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF3CCu;
            goto label_3bf3cc;
        }
    }
    ctx->pc = 0x3BF3CCu;
label_3bf3cc:
    // 0x3bf3cc: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x3bf3ccu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3bf3d0:
    // 0x3bf3d0: 0x1812  mflo        $v1
    ctx->pc = 0x3bf3d0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_3bf3d4:
    // 0x3bf3d4: 0x6a1018  mult        $v0, $v1, $t2
    ctx->pc = 0x3bf3d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3bf3d8:
    // 0x3bf3d8: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x3bf3d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3bf3dc:
    // 0x3bf3dc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_3bf3e0:
    if (ctx->pc == 0x3BF3E0u) {
        ctx->pc = 0x3BF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3DCu;
        // 0x3bf3e0: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF3E4u;
        goto label_3bf3e4;
    }
    ctx->pc = 0x3BF3DCu;
    {
        const bool branch_taken_0x3bf3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf3dc) {
            ctx->pc = 0x3BF3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF3DCu;
            // 0x3bf3e0: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf3b0;
        }
    }
    ctx->pc = 0x3BF3E4u;
label_3bf3e4:
    // 0x3bf3e4: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x3bf3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
label_3bf3e8:
    // 0x3bf3e8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3bf3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3bf3ec:
    // 0x3bf3ec: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x3bf3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_3bf3f0:
    // 0x3bf3f0: 0xad040014  sw          $a0, 0x14($t0)
    ctx->pc = 0x3bf3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 4));
label_3bf3f4:
    // 0x3bf3f4: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x3bf3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
label_3bf3f8:
    // 0x3bf3f8: 0x2442c1f0  addiu       $v0, $v0, -0x3E10
    ctx->pc = 0x3bf3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951408));
label_3bf3fc:
    // 0x3bf3fc: 0x3e00008  jr          $ra
label_3bf400:
    if (ctx->pc == 0x3BF400u) {
        ctx->pc = 0x3BF400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3FCu;
        // 0x3bf400: 0xad670000  sw          $a3, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF404u;
        goto label_3bf404;
    }
    ctx->pc = 0x3BF3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3FCu;
        // 0x3bf400: 0xad670000  sw          $a3, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF404u;
label_3bf404:
    // 0x3bf404: 0x0  nop
    ctx->pc = 0x3bf404u;
    // NOP
    ctx->pc = 0x3bf408u;
}
