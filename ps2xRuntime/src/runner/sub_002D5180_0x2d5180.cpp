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

// Function: sub_002D5180
// Address: 0x2d5180 - 0x2d5ee0
void sub_002D5180_0x2d5180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5180_0x2d5180");
#endif

    switch (ctx->pc) {
        case 0x2d51c0u: goto label_2d51c0;
        case 0x2d51d0u: goto label_2d51d0;
        case 0x2d51ecu: goto label_2d51ec;
        case 0x2d5204u: goto label_2d5204;
        case 0x2d521cu: goto label_2d521c;
        case 0x2d5230u: goto label_2d5230;
        case 0x2d5244u: goto label_2d5244;
        case 0x2d5254u: goto label_2d5254;
        case 0x2d5268u: goto label_2d5268;
        case 0x2d5278u: goto label_2d5278;
        case 0x2d52acu: goto label_2d52ac;
        case 0x2d52ccu: goto label_2d52cc;
        case 0x2d52e4u: goto label_2d52e4;
        case 0x2d5300u: goto label_2d5300;
        case 0x2d532cu: goto label_2d532c;
        case 0x2d534cu: goto label_2d534c;
        case 0x2d5374u: goto label_2d5374;
        case 0x2d5384u: goto label_2d5384;
        case 0x2d5398u: goto label_2d5398;
        case 0x2d53ccu: goto label_2d53cc;
        case 0x2d53e8u: goto label_2d53e8;
        case 0x2d5408u: goto label_2d5408;
        case 0x2d5428u: goto label_2d5428;
        case 0x2d5440u: goto label_2d5440;
        case 0x2d5460u: goto label_2d5460;
        case 0x2d5484u: goto label_2d5484;
        case 0x2d54a4u: goto label_2d54a4;
        case 0x2d54ccu: goto label_2d54cc;
        case 0x2d54f0u: goto label_2d54f0;
        case 0x2d54fcu: goto label_2d54fc;
        case 0x2d550cu: goto label_2d550c;
        case 0x2d552cu: goto label_2d552c;
        case 0x2d5548u: goto label_2d5548;
        case 0x2d5554u: goto label_2d5554;
        case 0x2d5574u: goto label_2d5574;
        case 0x2d55b4u: goto label_2d55b4;
        case 0x2d55ccu: goto label_2d55cc;
        case 0x2d55e0u: goto label_2d55e0;
        case 0x2d55fcu: goto label_2d55fc;
        case 0x2d5608u: goto label_2d5608;
        case 0x2d562cu: goto label_2d562c;
        case 0x2d5648u: goto label_2d5648;
        case 0x2d5668u: goto label_2d5668;
        case 0x2d5688u: goto label_2d5688;
        case 0x2d56c8u: goto label_2d56c8;
        case 0x2d56e4u: goto label_2d56e4;
        case 0x2d5700u: goto label_2d5700;
        case 0x2d5720u: goto label_2d5720;
        case 0x2d5758u: goto label_2d5758;
        case 0x2d5788u: goto label_2d5788;
        case 0x2d57a4u: goto label_2d57a4;
        case 0x2d57b8u: goto label_2d57b8;
        case 0x2d57d0u: goto label_2d57d0;
        case 0x2d57e8u: goto label_2d57e8;
        case 0x2d5800u: goto label_2d5800;
        case 0x2d581cu: goto label_2d581c;
        case 0x2d5838u: goto label_2d5838;
        case 0x2d5854u: goto label_2d5854;
        case 0x2d586cu: goto label_2d586c;
        case 0x2d58a8u: goto label_2d58a8;
        case 0x2d58bcu: goto label_2d58bc;
        case 0x2d58d0u: goto label_2d58d0;
        case 0x2d58fcu: goto label_2d58fc;
        case 0x2d5914u: goto label_2d5914;
        case 0x2d5928u: goto label_2d5928;
        case 0x2d593cu: goto label_2d593c;
        case 0x2d5960u: goto label_2d5960;
        case 0x2d5978u: goto label_2d5978;
        case 0x2d5998u: goto label_2d5998;
        case 0x2d59b4u: goto label_2d59b4;
        case 0x2d59d0u: goto label_2d59d0;
        case 0x2d59e4u: goto label_2d59e4;
        case 0x2d59f8u: goto label_2d59f8;
        case 0x2d5a18u: goto label_2d5a18;
        case 0x2d5a3cu: goto label_2d5a3c;
        case 0x2d5a64u: goto label_2d5a64;
        case 0x2d5a80u: goto label_2d5a80;
        case 0x2d5a98u: goto label_2d5a98;
        case 0x2d5af8u: goto label_2d5af8;
        case 0x2d5b14u: goto label_2d5b14;
        case 0x2d5b2cu: goto label_2d5b2c;
        case 0x2d5b68u: goto label_2d5b68;
        case 0x2d5b88u: goto label_2d5b88;
        case 0x2d5bc0u: goto label_2d5bc0;
        case 0x2d5bdcu: goto label_2d5bdc;
        case 0x2d5bfcu: goto label_2d5bfc;
        case 0x2d5c3cu: goto label_2d5c3c;
        case 0x2d5c64u: goto label_2d5c64;
        case 0x2d5c7cu: goto label_2d5c7c;
        case 0x2d5c90u: goto label_2d5c90;
        case 0x2d5cb0u: goto label_2d5cb0;
        case 0x2d5cd8u: goto label_2d5cd8;
        case 0x2d5cf0u: goto label_2d5cf0;
        case 0x2d5d04u: goto label_2d5d04;
        case 0x2d5d1cu: goto label_2d5d1c;
        case 0x2d5d50u: goto label_2d5d50;
        case 0x2d5d64u: goto label_2d5d64;
        case 0x2d5d84u: goto label_2d5d84;
        case 0x2d5da0u: goto label_2d5da0;
        case 0x2d5db4u: goto label_2d5db4;
        case 0x2d5dccu: goto label_2d5dcc;
        case 0x2d5decu: goto label_2d5dec;
        case 0x2d5e08u: goto label_2d5e08;
        case 0x2d5e20u: goto label_2d5e20;
        case 0x2d5e30u: goto label_2d5e30;
        case 0x2d5e44u: goto label_2d5e44;
        case 0x2d5e58u: goto label_2d5e58;
        case 0x2d5e68u: goto label_2d5e68;
        case 0x2d5e7cu: goto label_2d5e7c;
        case 0x2d5e94u: goto label_2d5e94;
        default: break;
    }

    ctx->pc = 0x2d5180u;

    // 0x2d5180: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x2d5180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x2d5184: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d5184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d5188: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d5188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d518c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d518cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d5190: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d5190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d5194: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d5194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d5198: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d5198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d519c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d519cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d51a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d51a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d51a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d51a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d51a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d51a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d51ac: 0xafa401e0  sw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d51acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
    // 0x2d51b0: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d51b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d51b4: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d51b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d51b8: 0xc0b4a3c  jal         func_2D28F0
    ctx->pc = 0x2D51B8u;
    SET_GPR_U32(ctx, 31, 0x2D51C0u);
    ctx->pc = 0x2D28F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D28F0u, 0x2D51B8u, 0x2D51C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D51C0u;
label_2d51c0:
    // 0x2d51c0: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x2d51c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
    // 0x2d51c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d51c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d51c8: 0x10000334  b           . + 4 + (0x334 << 2)
    ctx->pc = 0x2D51C8u;
    {
        const bool branch_taken_0x2d51c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d51c8) {
            ctx->pc = 0x2D5E9Cu;
            goto label_2d5e9c;
        }
    }
    ctx->pc = 0x2D51D0u;
label_2d51d0:
    // 0x2d51d0: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d51d4: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x2d51d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x2d51d8: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x2d51d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d51dc: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d51dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d51e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d51e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d51e4: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D51E4u;
    SET_GPR_U32(ctx, 31, 0x2D51ECu);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D51E4u, 0x2D51ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D51ECu;
label_2d51ec:
    // 0x2d51ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d51f0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2d51f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2d51f4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2d51f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d51f8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d51f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d51fc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D51FCu;
    SET_GPR_U32(ctx, 31, 0x2D5204u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D51FCu, 0x2D5204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5204u;
label_2d5204:
    // 0x2d5204: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x2d5204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
    // 0x2d5208: 0x8fa601e0  lw          $a2, 0x1E0($sp)
    ctx->pc = 0x2d5208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d520c: 0x24c40034  addiu       $a0, $a2, 0x34
    ctx->pc = 0x2d520cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 52));
    // 0x2d5210: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5214: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5214u;
    SET_GPR_U32(ctx, 31, 0x2D521Cu);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5214u, 0x2D521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D521Cu;
label_2d521c:
    // 0x2d521c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d521cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5220: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x2d5220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d5224: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d5224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d5228: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D5228u;
    SET_GPR_U32(ctx, 31, 0x2D5230u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D5228u, 0x2D5230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5230u;
label_2d5230:
    // 0x2d5230: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d5230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5234: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x2d5234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2d5238: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d5238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d523c: 0xc09b35c  jal         func_26CD70
    ctx->pc = 0x2D523Cu;
    SET_GPR_U32(ctx, 31, 0x2D5244u);
    ctx->pc = 0x26CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD70u, 0x2D523Cu, 0x2D5244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5244u;
label_2d5244:
    // 0x2d5244: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2d5244u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d524c: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2D524Cu;
    SET_GPR_U32(ctx, 31, 0x2D5254u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2D524Cu, 0x2D5254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5254u;
label_2d5254:
    // 0x2d5254: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d5254u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5258: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x2d5258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2d525c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d525cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5260: 0xc096b6c  jal         func_25ADB0
    ctx->pc = 0x2D5260u;
    SET_GPR_U32(ctx, 31, 0x2D5268u);
    ctx->pc = 0x25ADB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ADB0u, 0x2D5260u, 0x2D5268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5268u;
label_2d5268:
    // 0x2d5268: 0xa3a201df  sb          $v0, 0x1DF($sp)
    ctx->pc = 0x2d5268u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 479), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d526c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d526cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5270: 0xc096b6c  jal         func_25ADB0
    ctx->pc = 0x2D5270u;
    SET_GPR_U32(ctx, 31, 0x2D5278u);
    ctx->pc = 0x25ADB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ADB0u, 0x2D5270u, 0x2D5278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5278u;
label_2d5278:
    // 0x2d5278: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d5278u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d527c: 0xa3a301de  sb          $v1, 0x1DE($sp)
    ctx->pc = 0x2d527cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 478), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d5280: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5280u;
    {
        const bool branch_taken_0x2d5280 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5280) {
            ctx->pc = 0x2D5290u;
            goto label_2d5290;
        }
    }
    ctx->pc = 0x2D5288u;
    // 0x2d5288: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5288u;
    {
        const bool branch_taken_0x2d5288 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5288) {
            ctx->pc = 0x2D52A0u;
            goto label_2d52a0;
        }
    }
    ctx->pc = 0x2D5290u;
label_2d5290:
    // 0x2d5290: 0x13c00178  beqz        $fp, . + 4 + (0x178 << 2)
    ctx->pc = 0x2D5290u;
    {
        const bool branch_taken_0x2d5290 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5290) {
            ctx->pc = 0x2D5874u;
            goto label_2d5874;
        }
    }
    ctx->pc = 0x2D5298u;
    // 0x2d5298: 0x16a00176  bnez        $s5, . + 4 + (0x176 << 2)
    ctx->pc = 0x2D5298u;
    {
        const bool branch_taken_0x2d5298 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5298) {
            ctx->pc = 0x2D5874u;
            goto label_2d5874;
        }
    }
    ctx->pc = 0x2D52A0u;
label_2d52a0:
    // 0x2d52a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d52a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d52a4: 0xc0969dc  jal         func_25A770
    ctx->pc = 0x2D52A4u;
    SET_GPR_U32(ctx, 31, 0x2D52ACu);
    ctx->pc = 0x25A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A770u, 0x2D52A4u, 0x2D52ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D52ACu;
label_2d52ac:
    // 0x2d52ac: 0x14400171  bnez        $v0, . + 4 + (0x171 << 2)
    ctx->pc = 0x2D52ACu;
    {
        const bool branch_taken_0x2d52ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d52ac) {
            ctx->pc = 0x2D5874u;
            goto label_2d5874;
        }
    }
    ctx->pc = 0x2D52B4u;
    // 0x2d52b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d52b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d52b8: 0x16a00007  bnez        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D52B8u;
    {
        const bool branch_taken_0x2d52b8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d52b8) {
            ctx->pc = 0x2D52D8u;
            goto label_2d52d8;
        }
    }
    ctx->pc = 0x2D52C0u;
    // 0x2d52c0: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x2d52c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2d52c4: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2D52C4u;
    SET_GPR_U32(ctx, 31, 0x2D52CCu);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2D52C4u, 0x2D52CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D52CCu;
label_2d52cc:
    // 0x2d52cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d52ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d52d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D52D0u;
    {
        const bool branch_taken_0x2d52d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d52d0) {
            ctx->pc = 0x2D52E8u;
            goto label_2d52e8;
        }
    }
    ctx->pc = 0x2D52D8u;
label_2d52d8:
    // 0x2d52d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d52d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d52dc: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2D52DCu;
    SET_GPR_U32(ctx, 31, 0x2D52E4u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2D52DCu, 0x2D52E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D52E4u;
label_2d52e4:
    // 0x2d52e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d52e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d52e8:
    // 0x2d52e8: 0x124002ea  beqz        $s2, . + 4 + (0x2EA << 2)
    ctx->pc = 0x2D52E8u;
    {
        const bool branch_taken_0x2d52e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d52e8) {
            ctx->pc = 0x2D5E94u;
            goto label_2d5e94;
        }
    }
    ctx->pc = 0x2D52F0u;
    // 0x2d52f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d52f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d52f4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2d52f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d52f8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D52F8u;
    SET_GPR_U32(ctx, 31, 0x2D5300u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D52F8u, 0x2D5300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5300u;
label_2d5300:
    // 0x2d5300: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x2d5300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
    // 0x2d5304: 0x16a000a0  bnez        $s5, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2D5304u;
    {
        const bool branch_taken_0x2d5304 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5304) {
            ctx->pc = 0x2D5588u;
            goto label_2d5588;
        }
    }
    ctx->pc = 0x2D530Cu;
    // 0x2d530c: 0x8fa501cc  lw          $a1, 0x1CC($sp)
    ctx->pc = 0x2d530cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x2d5310: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d5310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5314: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d5314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d5318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d531c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d531cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5320: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d5320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5324: 0xc09bca0  jal         func_26F280
    ctx->pc = 0x2D5324u;
    SET_GPR_U32(ctx, 31, 0x2D532Cu);
    ctx->pc = 0x26F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F280u, 0x2D5324u, 0x2D532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D532Cu;
label_2d532c:
    // 0x2d532c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d532cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5330: 0x16e00021  bnez        $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D5330u;
    {
        const bool branch_taken_0x2d5330 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5330) {
            ctx->pc = 0x2D53B8u;
            goto label_2d53b8;
        }
    }
    ctx->pc = 0x2D5338u;
    // 0x2d5338: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d5338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d533c: 0x24840034  addiu       $a0, $a0, 0x34
    ctx->pc = 0x2d533cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x2d5340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5344: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5344u;
    SET_GPR_U32(ctx, 31, 0x2D534Cu);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5344u, 0x2D534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D534Cu;
label_2d534c:
    // 0x2d534c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2d534cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x2d5350: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x2d5350u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d5354: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d5354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5358: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d5358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d535c: 0xafa401c8  sw          $a0, 0x1C8($sp)
    ctx->pc = 0x2d535cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 4));
    // 0x2d5360: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d5360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5364: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x2d5364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x2d5368: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2d5368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d536c: 0xc0b4a64  jal         func_2D2990
    ctx->pc = 0x2D536Cu;
    SET_GPR_U32(ctx, 31, 0x2D5374u);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x2D536Cu, 0x2D5374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5374u;
label_2d5374:
    // 0x2d5374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d5374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5378: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2d5378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2d537c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D537Cu;
    SET_GPR_U32(ctx, 31, 0x2D5384u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D537Cu, 0x2D5384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5384u;
label_2d5384:
    // 0x2d5384: 0xafa201c4  sw          $v0, 0x1C4($sp)
    ctx->pc = 0x2d5384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
    // 0x2d5388: 0x8fa801c4  lw          $t0, 0x1C4($sp)
    ctx->pc = 0x2d5388u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x2d538c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2d538cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5390: 0xc0976e4  jal         func_25DB90
    ctx->pc = 0x2D5390u;
    SET_GPR_U32(ctx, 31, 0x2D5398u);
    ctx->pc = 0x25DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DB90u, 0x2D5390u, 0x2D5398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5398u;
label_2d5398:
    // 0x2d5398: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2d5398u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d539c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D539Cu;
    {
        const bool branch_taken_0x2d539c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d539c) {
            ctx->pc = 0x2D53B0u;
            goto label_2d53b0;
        }
    }
    ctx->pc = 0x2D53A4u;
    // 0x2d53a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d53a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d53a8: 0x8f84bcb0  lw          $a0, -0x4350($gp)
    ctx->pc = 0x2d53a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
    // 0x2d53ac: 0xa0830048  sb          $v1, 0x48($a0)
    ctx->pc = 0x2d53acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 3));
label_2d53b0:
    // 0x2d53b0: 0x100002be  b           . + 4 + (0x2BE << 2)
    ctx->pc = 0x2D53B0u;
    {
        const bool branch_taken_0x2d53b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d53b0) {
            ctx->pc = 0x2D5EACu;
            goto label_2d5eac;
        }
    }
    ctx->pc = 0x2D53B8u;
label_2d53b8:
    // 0x2d53b8: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x2d53b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d53bc: 0x24a40034  addiu       $a0, $a1, 0x34
    ctx->pc = 0x2d53bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    // 0x2d53c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d53c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d53c4: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D53C4u;
    SET_GPR_U32(ctx, 31, 0x2D53CCu);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D53C4u, 0x2D53CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D53CCu;
label_2d53cc:
    // 0x2d53cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d53d0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2d53d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x2d53d4: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d53d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d53d8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d53d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d53dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d53dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d53e0: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D53E0u;
    SET_GPR_U32(ctx, 31, 0x2D53E8u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D53E0u, 0x2D53E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D53E8u;
label_2d53e8:
    // 0x2d53e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d53ec: 0x8f84bcb0  lw          $a0, -0x4350($gp)
    ctx->pc = 0x2d53ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
    // 0x2d53f0: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x2d53f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d53f4: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x2d53f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2d53f8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2d53f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d53fc: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x2d53fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d5400: 0xc0aff64  jal         func_2BFD90
    ctx->pc = 0x2D5400u;
    SET_GPR_U32(ctx, 31, 0x2D5408u);
    ctx->pc = 0x2BFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFD90u, 0x2D5400u, 0x2D5408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5408u;
label_2d5408:
    // 0x2d5408: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d5408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d540c: 0x0  nop
    ctx->pc = 0x2d540cu;
    // NOP
    // 0x2d5410: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d5410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5414: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x2D5414u;
    {
        const bool branch_taken_0x2d5414 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5414) {
            ctx->pc = 0x2D5518u;
            goto label_2d5518;
        }
    }
    ctx->pc = 0x2D541Cu;
    // 0x2d541c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d541cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5420: 0xc048094  jal         func_120250
    ctx->pc = 0x2D5420u;
    SET_GPR_U32(ctx, 31, 0x2D5428u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2D5420u, 0x2D5428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5428u;
label_2d5428:
    // 0x2d5428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d542c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2d542cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2d5430: 0x24a5e3a0  addiu       $a1, $a1, -0x1C60
    ctx->pc = 0x2d5430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960032));
    // 0x2d5434: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d5434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5438: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2D5438u;
    SET_GPR_U32(ctx, 31, 0x2D5440u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2D5438u, 0x2D5440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5440u;
label_2d5440:
    // 0x2d5440: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D5440u;
    {
        const bool branch_taken_0x2d5440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5440) {
            ctx->pc = 0x2D54B8u;
            goto label_2d54b8;
        }
    }
    ctx->pc = 0x2D5448u;
    // 0x2d5448: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d5448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d544c: 0x24850034  addiu       $a1, $a0, 0x34
    ctx->pc = 0x2d544cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x2d5450: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d5450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5454: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5458: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5458u;
    SET_GPR_U32(ctx, 31, 0x2D5460u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5458u, 0x2D5460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5460u;
label_2d5460:
    // 0x2d5460: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d5460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5464: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d5464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d5468: 0xafa401c0  sw          $a0, 0x1C0($sp)
    ctx->pc = 0x2d5468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 4));
    // 0x2d546c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d546cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5470: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x2d5470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2d5474: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2d5474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x2d5478: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x2d5478u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d547c: 0xc0b6124  jal         func_2D8490
    ctx->pc = 0x2D547Cu;
    SET_GPR_U32(ctx, 31, 0x2D5484u);
    ctx->pc = 0x2D8490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8490u, 0x2D547Cu, 0x2D5484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5484u;
label_2d5484:
    // 0x2d5484: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d5484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5488: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x2d5488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2d548c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d548cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5490: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2d5490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5494: 0x8fa801e0  lw          $t0, 0x1E0($sp)
    ctx->pc = 0x2d5494u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5498: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x2d5498u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d549c: 0xc0b43d8  jal         func_2D0F60
    ctx->pc = 0x2D549Cu;
    SET_GPR_U32(ctx, 31, 0x2D54A4u);
    ctx->pc = 0x2D0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F60u, 0x2D549Cu, 0x2D54A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D54A4u;
label_2d54a4:
    // 0x2d54a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d54a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d54a8: 0x8f83bcb0  lw          $v1, -0x4350($gp)
    ctx->pc = 0x2d54a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
    // 0x2d54ac: 0xa0660048  sb          $a2, 0x48($v1)
    ctx->pc = 0x2d54acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 6));
    // 0x2d54b0: 0x1000027e  b           . + 4 + (0x27E << 2)
    ctx->pc = 0x2D54B0u;
    {
        const bool branch_taken_0x2d54b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d54b0) {
            ctx->pc = 0x2D5EACu;
            goto label_2d5eac;
        }
    }
    ctx->pc = 0x2D54B8u;
label_2d54b8:
    // 0x2d54b8: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d54b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d54bc: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d54bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d54c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d54c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d54c4: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D54C4u;
    SET_GPR_U32(ctx, 31, 0x2D54CCu);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D54C4u, 0x2D54CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D54CCu;
label_2d54cc:
    // 0x2d54cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d54ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d54d0: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d54d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d54d4: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2d54d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d54d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d54d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d54dc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2d54dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d54e0: 0x8fa801e0  lw          $t0, 0x1E0($sp)
    ctx->pc = 0x2d54e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d54e4: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x2d54e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d54e8: 0xc0b43d8  jal         func_2D0F60
    ctx->pc = 0x2D54E8u;
    SET_GPR_U32(ctx, 31, 0x2D54F0u);
    ctx->pc = 0x2D0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F60u, 0x2D54E8u, 0x2D54F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D54F0u;
label_2d54f0:
    // 0x2d54f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d54f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d54f4: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2D54F4u;
    SET_GPR_U32(ctx, 31, 0x2D54FCu);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2D54F4u, 0x2D54FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D54FCu;
label_2d54fc:
    // 0x2d54fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d54fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5500: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d5500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5504: 0xc097064  jal         func_25C190
    ctx->pc = 0x2D5504u;
    SET_GPR_U32(ctx, 31, 0x2D550Cu);
    ctx->pc = 0x25C190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C190u, 0x2D5504u, 0x2D550Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D550Cu;
label_2d550c:
    // 0x2d550c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d550cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5510: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x2D5510u;
    {
        const bool branch_taken_0x2d5510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5510) {
            ctx->pc = 0x2D585Cu;
            goto label_2d585c;
        }
    }
    ctx->pc = 0x2D5518u;
label_2d5518:
    // 0x2d5518: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x2d5518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d551c: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x2d551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x2d5520: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5524: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5524u;
    SET_GPR_U32(ctx, 31, 0x2D552Cu);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5524u, 0x2D552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D552Cu;
label_2d552c:
    // 0x2d552c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d552cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5530: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2d5530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d5534: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x2d5534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
    // 0x2d5538: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d5538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d553c: 0x8fa501bc  lw          $a1, 0x1BC($sp)
    ctx->pc = 0x2d553cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x2d5540: 0xc0b4a64  jal         func_2D2990
    ctx->pc = 0x2D5540u;
    SET_GPR_U32(ctx, 31, 0x2D5548u);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x2D5540u, 0x2D5548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5548u;
label_2d5548:
    // 0x2d5548: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x2d5548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x2d554c: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x2D554Cu;
    SET_GPR_U32(ctx, 31, 0x2D5554u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2D554Cu, 0x2D5554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5554u;
label_2d5554:
    // 0x2d5554: 0xafb7018c  sw          $s7, 0x18C($sp)
    ctx->pc = 0x2d5554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 23));
    // 0x2d5558: 0xafb20190  sw          $s2, 0x190($sp)
    ctx->pc = 0x2d5558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 18));
    // 0x2d555c: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x2d555cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x2d5560: 0x27a50188  addiu       $a1, $sp, 0x188
    ctx->pc = 0x2d5560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x2d5564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d5564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5568: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d5568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d556c: 0xc0af03c  jal         func_2BC0F0
    ctx->pc = 0x2D556Cu;
    SET_GPR_U32(ctx, 31, 0x2D5574u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x2D556Cu, 0x2D5574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5574u;
label_2d5574:
    // 0x2d5574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d5574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5578: 0x8f83bcb0  lw          $v1, -0x4350($gp)
    ctx->pc = 0x2d5578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
    // 0x2d557c: 0xa0650048  sb          $a1, 0x48($v1)
    ctx->pc = 0x2d557cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d5580: 0x1000024a  b           . + 4 + (0x24A << 2)
    ctx->pc = 0x2D5580u;
    {
        const bool branch_taken_0x2d5580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5580) {
            ctx->pc = 0x2D5EACu;
            goto label_2d5eac;
        }
    }
    ctx->pc = 0x2D5588u;
label_2d5588:
    // 0x2d5588: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d5588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d558c: 0xa3a401dd  sb          $a0, 0x1DD($sp)
    ctx->pc = 0x2d558cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 477), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d5590: 0x93a201de  lbu         $v0, 0x1DE($sp)
    ctx->pc = 0x2d5590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 478)));
    // 0x2d5594: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2D5594u;
    {
        const bool branch_taken_0x2d5594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5594) {
            ctx->pc = 0x2D5760u;
            goto label_2d5760;
        }
    }
    ctx->pc = 0x2D559Cu;
    // 0x2d559c: 0xa3a001dd  sb          $zero, 0x1DD($sp)
    ctx->pc = 0x2d559cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 477), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d55a0: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d55a4: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d55a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d55a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d55a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55ac: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D55ACu;
    SET_GPR_U32(ctx, 31, 0x2D55B4u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D55ACu, 0x2D55B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D55B4u;
label_2d55b4:
    // 0x2d55b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d55b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d55b8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2d55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d55bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d55bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55c0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2d55c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d55c4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D55C4u;
    SET_GPR_U32(ctx, 31, 0x2D55CCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D55C4u, 0x2D55CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D55CCu;
label_2d55cc:
    // 0x2d55cc: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x2d55ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
    // 0x2d55d0: 0x8fa401b8  lw          $a0, 0x1B8($sp)
    ctx->pc = 0x2d55d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x2d55d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d55d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55d8: 0xc09ad7c  jal         func_26B5F0
    ctx->pc = 0x2D55D8u;
    SET_GPR_U32(ctx, 31, 0x2D55E0u);
    ctx->pc = 0x26B5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B5F0u, 0x2D55D8u, 0x2D55E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D55E0u;
label_2d55e0:
    // 0x2d55e0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2d55e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2d55e4: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2d55e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d55e8: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x2d55e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
    // 0x2d55ec: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x2d55ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x2d55f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d55f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55f4: 0xc04809c  jal         func_120270
    ctx->pc = 0x2D55F4u;
    SET_GPR_U32(ctx, 31, 0x2D55FCu);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x2D55F4u, 0x2D55FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D55FCu;
label_2d55fc:
    // 0x2d55fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d55fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5600: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2D5600u;
    {
        const bool branch_taken_0x2d5600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5600) {
            ctx->pc = 0x2D574Cu;
            goto label_2d574c;
        }
    }
    ctx->pc = 0x2D5608u;
label_2d5608:
    // 0x2d5608: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d5608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d560c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2d560cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2d5610: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2d5610u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d5614: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d5614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d5618: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d561c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2d561cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2d5620: 0x24a5e3b8  addiu       $a1, $a1, -0x1C48
    ctx->pc = 0x2d5620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960056));
    // 0x2d5624: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2D5624u;
    SET_GPR_U32(ctx, 31, 0x2D562Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2D5624u, 0x2D562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D562Cu;
label_2d562c:
    // 0x2d562c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D562Cu;
    {
        const bool branch_taken_0x2d562c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d562c) {
            ctx->pc = 0x2D56B0u;
            goto label_2d56b0;
        }
    }
    ctx->pc = 0x2D5634u;
    // 0x2d5634: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x2d5634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5638: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x2d5638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x2d563c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d563cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5640: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5640u;
    SET_GPR_U32(ctx, 31, 0x2D5648u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5640u, 0x2D5648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5648u;
label_2d5648:
    // 0x2d5648: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d5648u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d564c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d564cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5650: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2d5650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2d5654: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d5654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5658: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d5658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d565c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d565cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5660: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5660u;
    SET_GPR_U32(ctx, 31, 0x2D5668u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5660u, 0x2D5668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5668u;
label_2d5668:
    // 0x2d5668: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d5668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d566c: 0x8f84bcb0  lw          $a0, -0x4350($gp)
    ctx->pc = 0x2d566cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
    // 0x2d5670: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2d5670u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d5674: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x2d5674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2d5678: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2d5678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d567c: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x2d567cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2d5680: 0xc0aff64  jal         func_2BFD90
    ctx->pc = 0x2D5680u;
    SET_GPR_U32(ctx, 31, 0x2D5688u);
    ctx->pc = 0x2BFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFD90u, 0x2D5680u, 0x2D5688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5688u;
label_2d5688:
    // 0x2d5688: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d5688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d568c: 0x0  nop
    ctx->pc = 0x2d568cu;
    // NOP
    // 0x2d5690: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d5690u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d5694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5698: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5698u;
    {
        const bool branch_taken_0x2d5698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5698) {
            ctx->pc = 0x2D56A4u;
            goto label_2d56a4;
        }
    }
    ctx->pc = 0x2D56A0u;
    // 0x2d56a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d56a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d56a4:
    // 0x2d56a4: 0xa3a201dd  sb          $v0, 0x1DD($sp)
    ctx->pc = 0x2d56a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 477), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d56a8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2D56A8u;
    {
        const bool branch_taken_0x2d56a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d56a8) {
            ctx->pc = 0x2D5760u;
            goto label_2d5760;
        }
    }
    ctx->pc = 0x2D56B0u;
label_2d56b0:
    // 0x2d56b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d56b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d56b4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d56b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d56b8: 0x2785a500  addiu       $a1, $gp, -0x5B00
    ctx->pc = 0x2d56b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944000));
    // 0x2d56bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2d56bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d56c0: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x2D56C0u;
    SET_GPR_U32(ctx, 31, 0x2D56C8u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x2D56C0u, 0x2D56C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D56C8u;
label_2d56c8:
    // 0x2d56c8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D56C8u;
    {
        const bool branch_taken_0x2d56c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d56c8) {
            ctx->pc = 0x2D5748u;
            goto label_2d5748;
        }
    }
    ctx->pc = 0x2D56D0u;
    // 0x2d56d0: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d56d4: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d56d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d56d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d56d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d56dc: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D56DCu;
    SET_GPR_U32(ctx, 31, 0x2D56E4u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D56DCu, 0x2D56E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D56E4u;
label_2d56e4:
    // 0x2d56e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d56e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d56e8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2d56e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2d56ec: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d56ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d56f0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d56f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d56f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d56f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d56f8: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D56F8u;
    SET_GPR_U32(ctx, 31, 0x2D5700u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D56F8u, 0x2D5700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5700u;
label_2d5700:
    // 0x2d5700: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d5700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5704: 0x8f84bcb0  lw          $a0, -0x4350($gp)
    ctx->pc = 0x2d5704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
    // 0x2d5708: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2d5708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d570c: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x2d570cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2d5710: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2d5710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d5714: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x2d5714u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2d5718: 0xc0aff64  jal         func_2BFD90
    ctx->pc = 0x2D5718u;
    SET_GPR_U32(ctx, 31, 0x2D5720u);
    ctx->pc = 0x2BFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFD90u, 0x2D5718u, 0x2D5720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5720u;
label_2d5720:
    // 0x2d5720: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d5720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d5724: 0x0  nop
    ctx->pc = 0x2d5724u;
    // NOP
    // 0x2d5728: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d5728u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d572c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d572cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5730: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5730u;
    {
        const bool branch_taken_0x2d5730 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5730) {
            ctx->pc = 0x2D573Cu;
            goto label_2d573c;
        }
    }
    ctx->pc = 0x2D5738u;
    // 0x2d5738: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d5738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d573c:
    // 0x2d573c: 0xa3a201dd  sb          $v0, 0x1DD($sp)
    ctx->pc = 0x2d573cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 477), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d5740: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D5740u;
    {
        const bool branch_taken_0x2d5740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5740) {
            ctx->pc = 0x2D5760u;
            goto label_2d5760;
        }
    }
    ctx->pc = 0x2D5748u;
label_2d5748:
    // 0x2d5748: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2d5748u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2d574c:
    // 0x2d574c: 0x8fa401b4  lw          $a0, 0x1B4($sp)
    ctx->pc = 0x2d574cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x2d5750: 0xc04808c  jal         func_120230
    ctx->pc = 0x2D5750u;
    SET_GPR_U32(ctx, 31, 0x2D5758u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x2D5750u, 0x2D5758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5758u;
label_2d5758:
    // 0x2d5758: 0x1662ffab  bne         $s3, $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x2D5758u;
    {
        const bool branch_taken_0x2d5758 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d5758) {
            ctx->pc = 0x2D5608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5608;
        }
    }
    ctx->pc = 0x2D5760u;
label_2d5760:
    // 0x2d5760: 0x93a201dd  lbu         $v0, 0x1DD($sp)
    ctx->pc = 0x2d5760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 477)));
    // 0x2d5764: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2D5764u;
    {
        const bool branch_taken_0x2d5764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5764) {
            ctx->pc = 0x2D5824u;
            goto label_2d5824;
        }
    }
    ctx->pc = 0x2D576Cu;
    // 0x2d576c: 0x8fa401cc  lw          $a0, 0x1CC($sp)
    ctx->pc = 0x2d576cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x2d5770: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d5770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5774: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d5774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d5778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d577c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d577cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5780: 0xc09bca0  jal         func_26F280
    ctx->pc = 0x2D5780u;
    SET_GPR_U32(ctx, 31, 0x2D5788u);
    ctx->pc = 0x26F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F280u, 0x2D5780u, 0x2D5788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5788u;
label_2d5788:
    // 0x2d5788: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x2d5788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x2d578c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2d578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2d5790: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D5790u;
    {
        const bool branch_taken_0x2d5790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5790) {
            ctx->pc = 0x2D585Cu;
            goto label_2d585c;
        }
    }
    ctx->pc = 0x2D5798u;
    // 0x2d5798: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2d5798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2d579c: 0xc048094  jal         func_120250
    ctx->pc = 0x2D579Cu;
    SET_GPR_U32(ctx, 31, 0x2D57A4u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2D579Cu, 0x2D57A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D57A4u;
label_2d57a4:
    // 0x2d57a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d57a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57a8: 0x24050553  addiu       $a1, $zero, 0x553
    ctx->pc = 0x2d57a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1363));
    // 0x2d57ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d57acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57b0: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2D57B0u;
    SET_GPR_U32(ctx, 31, 0x2D57B8u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2D57B0u, 0x2D57B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D57B8u;
label_2d57b8:
    // 0x2d57b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d57b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d57bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d57bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d57c0: 0xa3a201dc  sb          $v0, 0x1DC($sp)
    ctx->pc = 0x2d57c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 476), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d57c4: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x2d57c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x2d57c8: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x2D57C8u;
    SET_GPR_U32(ctx, 31, 0x2D57D0u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2D57C8u, 0x2D57D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D57D0u;
label_2d57d0:
    // 0x2d57d0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2d57d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2d57d4: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x2d57d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x2d57d8: 0xafb20180  sw          $s2, 0x180($sp)
    ctx->pc = 0x2d57d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 18));
    // 0x2d57dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d57dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57e0: 0xc096ea4  jal         func_25BA90
    ctx->pc = 0x2D57E0u;
    SET_GPR_U32(ctx, 31, 0x2D57E8u);
    ctx->pc = 0x25BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA90u, 0x2D57E0u, 0x2D57E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D57E8u;
label_2d57e8:
    // 0x2d57e8: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x2d57e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x2d57ec: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d57ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d57f0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d57f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d57f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d57f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57f8: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D57F8u;
    SET_GPR_U32(ctx, 31, 0x2D5800u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D57F8u, 0x2D5800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5800u;
label_2d5800:
    // 0x2d5800: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d5800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5804: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d5804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d5808: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x2d5808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x2d580c: 0x93a601dc  lbu         $a2, 0x1DC($sp)
    ctx->pc = 0x2d580cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2d5810: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d5810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5814: 0xc0af03c  jal         func_2BC0F0
    ctx->pc = 0x2D5814u;
    SET_GPR_U32(ctx, 31, 0x2D581Cu);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x2D5814u, 0x2D581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D581Cu;
label_2d581c:
    // 0x2d581c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D581Cu;
    {
        const bool branch_taken_0x2d581c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d581c) {
            ctx->pc = 0x2D585Cu;
            goto label_2d585c;
        }
    }
    ctx->pc = 0x2D5824u;
label_2d5824:
    // 0x2d5824: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d5824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5828: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d5828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d582c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d582cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5830: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5830u;
    SET_GPR_U32(ctx, 31, 0x2D5838u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5830u, 0x2D5838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5838u;
label_2d5838:
    // 0x2d5838: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d5838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d583c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2d583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d5840: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x2d5840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    // 0x2d5844: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d5844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5848: 0x8fa501ac  lw          $a1, 0x1AC($sp)
    ctx->pc = 0x2d5848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x2d584c: 0xc0b4a64  jal         func_2D2990
    ctx->pc = 0x2D584Cu;
    SET_GPR_U32(ctx, 31, 0x2D5854u);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x2D584Cu, 0x2D5854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5854u;
label_2d5854:
    // 0x2d5854: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x2D5854u;
    {
        const bool branch_taken_0x2d5854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5854) {
            ctx->pc = 0x2D5EACu;
            goto label_2d5eac;
        }
    }
    ctx->pc = 0x2D585Cu;
label_2d585c:
    // 0x2d585c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d585cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5860: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d5860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5864: 0xc0969e4  jal         func_25A790
    ctx->pc = 0x2D5864u;
    SET_GPR_U32(ctx, 31, 0x2D586Cu);
    ctx->pc = 0x25A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A790u, 0x2D5864u, 0x2D586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D586Cu;
label_2d586c:
    // 0x2d586c: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x2D586Cu;
    {
        const bool branch_taken_0x2d586c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d586c) {
            ctx->pc = 0x2D5E94u;
            goto label_2d5e94;
        }
    }
    ctx->pc = 0x2D5874u;
label_2d5874:
    // 0x2d5874: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5874u;
    {
        const bool branch_taken_0x2d5874 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5874) {
            ctx->pc = 0x2D5884u;
            goto label_2d5884;
        }
    }
    ctx->pc = 0x2D587Cu;
    // 0x2d587c: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D587Cu;
    {
        const bool branch_taken_0x2d587c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d587c) {
            ctx->pc = 0x2D5894u;
            goto label_2d5894;
        }
    }
    ctx->pc = 0x2D5884u;
label_2d5884:
    // 0x2d5884: 0x13c00139  beqz        $fp, . + 4 + (0x139 << 2)
    ctx->pc = 0x2D5884u;
    {
        const bool branch_taken_0x2d5884 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5884) {
            ctx->pc = 0x2D5D6Cu;
            goto label_2d5d6c;
        }
    }
    ctx->pc = 0x2D588Cu;
    // 0x2d588c: 0x12a00137  beqz        $s5, . + 4 + (0x137 << 2)
    ctx->pc = 0x2D588Cu;
    {
        const bool branch_taken_0x2d588c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d588c) {
            ctx->pc = 0x2D5D6Cu;
            goto label_2d5d6c;
        }
    }
    ctx->pc = 0x2D5894u;
label_2d5894:
    // 0x2d5894: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d5894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5898: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d5898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d589c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d589cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d58a0: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D58A0u;
    SET_GPR_U32(ctx, 31, 0x2D58A8u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D58A0u, 0x2D58A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D58A8u;
label_2d58a8:
    // 0x2d58a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d58a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d58ac: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d58acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d58b0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d58b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d58b4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D58B4u;
    SET_GPR_U32(ctx, 31, 0x2D58BCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D58B4u, 0x2D58BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D58BCu;
label_2d58bc:
    // 0x2d58bc: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x2d58bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x2d58c0: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x2d58c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x2d58c4: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x2d58c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2d58c8: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D58C8u;
    SET_GPR_U32(ctx, 31, 0x2D58D0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D58C8u, 0x2D58D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D58D0u;
label_2d58d0:
    // 0x2d58d0: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x2d58d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x2d58d4: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x2d58d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x2d58d8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d58d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d58dc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d58dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d58e0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d58e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d58e4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d58e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d58e8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d58e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d58ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d58ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d58f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d58f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d58f4: 0xc0969dc  jal         func_25A770
    ctx->pc = 0x2D58F4u;
    SET_GPR_U32(ctx, 31, 0x2D58FCu);
    ctx->pc = 0x25A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A770u, 0x2D58F4u, 0x2D58FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D58FCu;
label_2d58fc:
    // 0x2d58fc: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2D58FCu;
    {
        const bool branch_taken_0x2d58fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d58fc) {
            ctx->pc = 0x2D5A40u;
            goto label_2d5a40;
        }
    }
    ctx->pc = 0x2D5904u;
    // 0x2d5904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d5908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d590c: 0xc0969e4  jal         func_25A790
    ctx->pc = 0x2D590Cu;
    SET_GPR_U32(ctx, 31, 0x2D5914u);
    ctx->pc = 0x25A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A790u, 0x2D590Cu, 0x2D5914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5914u;
label_2d5914:
    // 0x2d5914: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d5914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5918: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d5918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d591c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d591cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5920: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5920u;
    SET_GPR_U32(ctx, 31, 0x2D5928u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5920u, 0x2D5928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5928u;
label_2d5928:
    // 0x2d5928: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d5928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d592c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d592cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5930: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2d5930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d5934: 0xc0b59c0  jal         func_2D6700
    ctx->pc = 0x2D5934u;
    SET_GPR_U32(ctx, 31, 0x2D593Cu);
    ctx->pc = 0x2D6700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6700u, 0x2D5934u, 0x2D593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D593Cu;
label_2d593c:
    // 0x2d593c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d593cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5940: 0x1280003f  beqz        $s4, . + 4 + (0x3F << 2)
    ctx->pc = 0x2D5940u;
    {
        const bool branch_taken_0x2d5940 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5940) {
            ctx->pc = 0x2D5A40u;
            goto label_2d5a40;
        }
    }
    ctx->pc = 0x2D5948u;
    // 0x2d5948: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x2d5948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2d594c: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2D594Cu;
    {
        const bool branch_taken_0x2d594c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d594c) {
            ctx->pc = 0x2D5A40u;
            goto label_2d5a40;
        }
    }
    ctx->pc = 0x2D5954u;
    // 0x2d5954: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x2d5954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2d5958: 0xc048094  jal         func_120250
    ctx->pc = 0x2D5958u;
    SET_GPR_U32(ctx, 31, 0x2D5960u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2D5958u, 0x2D5960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5960u;
label_2d5960:
    // 0x2d5960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5964: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2d5964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2d5968: 0x24a5e3a0  addiu       $a1, $a1, -0x1C60
    ctx->pc = 0x2d5968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960032));
    // 0x2d596c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d596cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5970: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2D5970u;
    SET_GPR_U32(ctx, 31, 0x2D5978u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2D5970u, 0x2D5978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5978u;
label_2d5978:
    // 0x2d5978: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d5978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d597c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d597cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d5980: 0xa3a201db  sb          $v0, 0x1DB($sp)
    ctx->pc = 0x2d5980u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 475), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d5984: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x2d5984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2d5988: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d5988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d598c: 0x93a601db  lbu         $a2, 0x1DB($sp)
    ctx->pc = 0x2d598cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 475)));
    // 0x2d5990: 0xc099fdc  jal         func_267F70
    ctx->pc = 0x2D5990u;
    SET_GPR_U32(ctx, 31, 0x2D5998u);
    ctx->pc = 0x267F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267F70u, 0x2D5990u, 0x2D5998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5998u;
label_2d5998:
    // 0x2d5998: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5998u;
    {
        const bool branch_taken_0x2d5998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5998) {
            ctx->pc = 0x2D59BCu;
            goto label_2d59bc;
        }
    }
    ctx->pc = 0x2D59A0u;
    // 0x2d59a0: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x2d59a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2d59a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d59a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d59a8: 0x93a601db  lbu         $a2, 0x1DB($sp)
    ctx->pc = 0x2d59a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 475)));
    // 0x2d59ac: 0xc099fdc  jal         func_267F70
    ctx->pc = 0x2D59ACu;
    SET_GPR_U32(ctx, 31, 0x2D59B4u);
    ctx->pc = 0x267F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267F70u, 0x2D59ACu, 0x2D59B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D59B4u;
label_2d59b4:
    // 0x2d59b4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D59B4u;
    {
        const bool branch_taken_0x2d59b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d59b4) {
            ctx->pc = 0x2D5A40u;
            goto label_2d5a40;
        }
    }
    ctx->pc = 0x2D59BCu;
label_2d59bc:
    // 0x2d59bc: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d59c0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d59c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d59c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d59c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d59c8: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D59C8u;
    SET_GPR_U32(ctx, 31, 0x2D59D0u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D59C8u, 0x2D59D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D59D0u;
label_2d59d0:
    // 0x2d59d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d59d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d59d4: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d59d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d59d8: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2d59d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d59dc: 0xc0b5ad0  jal         func_2D6B40
    ctx->pc = 0x2D59DCu;
    SET_GPR_U32(ctx, 31, 0x2D59E4u);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x2D59DCu, 0x2D59E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D59E4u;
label_2d59e4:
    // 0x2d59e4: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d59e8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d59e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d59ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d59ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d59f0: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D59F0u;
    SET_GPR_U32(ctx, 31, 0x2D59F8u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D59F0u, 0x2D59F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D59F8u;
label_2d59f8:
    // 0x2d59f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d59fc: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x2d59fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x2d5a00: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d5a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5a04: 0x24820034  addiu       $v0, $a0, 0x34
    ctx->pc = 0x2d5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x2d5a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a10: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5A10u;
    SET_GPR_U32(ctx, 31, 0x2D5A18u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5A10u, 0x2D5A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A18u;
label_2d5a18:
    // 0x2d5a18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d5a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5a1c: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x2d5a1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d5a20: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2d5a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d5a24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d5a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a28: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x2d5a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x2d5a2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d5a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a30: 0x24660014  addiu       $a2, $v1, 0x14
    ctx->pc = 0x2d5a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x2d5a34: 0xc0ad4f8  jal         func_2B53E0
    ctx->pc = 0x2D5A34u;
    SET_GPR_U32(ctx, 31, 0x2D5A3Cu);
    ctx->pc = 0x2B53E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B53E0u, 0x2D5A34u, 0x2D5A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A3Cu;
label_2d5a3c:
    // 0x2d5a3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d5a40:
    // 0x2d5a40: 0x17c00114  bnez        $fp, . + 4 + (0x114 << 2)
    ctx->pc = 0x2D5A40u;
    {
        const bool branch_taken_0x2d5a40 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5a40) {
            ctx->pc = 0x2D5E94u;
            goto label_2d5e94;
        }
    }
    ctx->pc = 0x2D5A48u;
    // 0x2d5a48: 0x16a00112  bnez        $s5, . + 4 + (0x112 << 2)
    ctx->pc = 0x2D5A48u;
    {
        const bool branch_taken_0x2d5a48 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5a48) {
            ctx->pc = 0x2D5E94u;
            goto label_2d5e94;
        }
    }
    ctx->pc = 0x2D5A50u;
    // 0x2d5a50: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d5a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5a54: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d5a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d5a58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a5c: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5A5Cu;
    SET_GPR_U32(ctx, 31, 0x2D5A64u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5A5Cu, 0x2D5A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A64u;
label_2d5a64:
    // 0x2d5a64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a68: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2d5a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5a6c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2d5a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2d5a70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a74: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d5a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d5a78: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D5A78u;
    SET_GPR_U32(ctx, 31, 0x2D5A80u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D5A78u, 0x2D5A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A80u;
label_2d5a80:
    // 0x2d5a80: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x2d5a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
    // 0x2d5a84: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x2d5a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x2d5a88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a8c: 0x8fa501a4  lw          $a1, 0x1A4($sp)
    ctx->pc = 0x2d5a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x2d5a90: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D5A90u;
    SET_GPR_U32(ctx, 31, 0x2D5A98u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D5A90u, 0x2D5A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A98u;
label_2d5a98:
    // 0x2d5a98: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x2d5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x2d5a9c: 0x27a30148  addiu       $v1, $sp, 0x148
    ctx->pc = 0x2d5a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x2d5aa0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2d5aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d5aa4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d5aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5aa8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d5aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5aac: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2d5aacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d5ab0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d5ab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d5ab4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d5ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d5ab8: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x2d5ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5abc: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x2d5abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5ac0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d5ac0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d5ac4: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x2d5ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2d5ac8: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x2d5ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5acc: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x2d5accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5ad0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d5ad0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d5ad4: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x2d5ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x2d5ad8: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x2d5ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5adc: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x2d5adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5ae0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d5ae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d5ae4: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x2d5ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2d5ae8: 0x27a20158  addiu       $v0, $sp, 0x158
    ctx->pc = 0x2d5ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x2d5aec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5af0: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D5AF0u;
    SET_GPR_U32(ctx, 31, 0x2D5AF8u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D5AF0u, 0x2D5AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5AF8u;
label_2d5af8:
    // 0x2d5af8: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2d5af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x2d5afc: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d5afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5b00: 0x24820034  addiu       $v0, $a0, 0x34
    ctx->pc = 0x2d5b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x2d5b04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b0c: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5B0Cu;
    SET_GPR_U32(ctx, 31, 0x2D5B14u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5B0Cu, 0x2D5B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5B14u;
label_2d5b14:
    // 0x2d5b14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d5b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5b18: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d5b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5b1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b20: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x2d5b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2d5b24: 0xc0b4db0  jal         func_2D36C0
    ctx->pc = 0x2D5B24u;
    SET_GPR_U32(ctx, 31, 0x2D5B2Cu);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2D5B24u, 0x2D5B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5B2Cu;
label_2d5b2c:
    // 0x2d5b2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2d5b2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b30: 0x14e00035  bnez        $a3, . + 4 + (0x35 << 2)
    ctx->pc = 0x2D5B30u;
    {
        const bool branch_taken_0x2d5b30 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5b30) {
            ctx->pc = 0x2D5C08u;
            goto label_2d5c08;
        }
    }
    ctx->pc = 0x2D5B38u;
    // 0x2d5b38: 0xc7a101a0  lwc1        $f1, 0x1A0($sp)
    ctx->pc = 0x2d5b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5b3c: 0x3c084320  lui         $t0, 0x4320
    ctx->pc = 0x2d5b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17184 << 16));
    // 0x2d5b40: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2d5b40u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5b44: 0x0  nop
    ctx->pc = 0x2d5b44u;
    // NOP
    // 0x2d5b48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d5b48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5b4c: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x2D5B4Cu;
    {
        const bool branch_taken_0x2d5b4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5b4c) {
            ctx->pc = 0x2D5BCCu;
            goto label_2d5bcc;
        }
    }
    ctx->pc = 0x2D5B54u;
    // 0x2d5b54: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5b58: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d5b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d5b5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b60: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5B60u;
    SET_GPR_U32(ctx, 31, 0x2D5B68u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5B60u, 0x2D5B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5B68u;
label_2d5b68:
    // 0x2d5b68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5b70: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2d5b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x2d5b74: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5b78: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d5b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d5b7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b80: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5B80u;
    SET_GPR_U32(ctx, 31, 0x2D5B88u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5B80u, 0x2D5B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5B88u;
label_2d5b88:
    // 0x2d5b88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b8c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d5b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5b90: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5b94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b98: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x2d5b98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d5b9c: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2d5b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d5ba0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2d5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2d5ba4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d5ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ba8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d5ba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bac: 0x8fa801e0  lw          $t0, 0x1E0($sp)
    ctx->pc = 0x2d5bacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5bb0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2d5bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d5bb4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2d5bb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bb8: 0xc0b43d8  jal         func_2D0F60
    ctx->pc = 0x2D5BB8u;
    SET_GPR_U32(ctx, 31, 0x2D5BC0u);
    ctx->pc = 0x2D0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F60u, 0x2D5BB8u, 0x2D5BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5BC0u;
label_2d5bc0:
    // 0x2d5bc0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d5bc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bc4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2D5BC4u;
    {
        const bool branch_taken_0x2d5bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5bc4) {
            ctx->pc = 0x2D5CDCu;
            goto label_2d5cdc;
        }
    }
    ctx->pc = 0x2D5BCCu;
label_2d5bcc:
    // 0x2d5bcc: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x2d5bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x2d5bd0: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x2d5bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x2d5bd4: 0xc0b5f04  jal         func_2D7C10
    ctx->pc = 0x2D5BD4u;
    SET_GPR_U32(ctx, 31, 0x2D5BDCu);
    ctx->pc = 0x2D7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C10u, 0x2D5BD4u, 0x2D5BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5BDCu;
label_2d5bdc:
    // 0x2d5bdc: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2d5bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2d5be0: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2d5be0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d5be4: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x2d5be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2d5be8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d5becu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d5bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d5bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bf4: 0xc090fe0  jal         func_243F80
    ctx->pc = 0x2D5BF4u;
    SET_GPR_U32(ctx, 31, 0x2D5BFCu);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2D5BF4u, 0x2D5BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5BFCu;
label_2d5bfc:
    // 0x2d5bfc: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2d5bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x2d5c00: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2D5C00u;
    {
        const bool branch_taken_0x2d5c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5c00) {
            ctx->pc = 0x2D5CDCu;
            goto label_2d5cdc;
        }
    }
    ctx->pc = 0x2D5C08u;
label_2d5c08:
    // 0x2d5c08: 0xc7a101a0  lwc1        $f1, 0x1A0($sp)
    ctx->pc = 0x2d5c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5c0c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2d5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2d5c10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d5c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5c14: 0x0  nop
    ctx->pc = 0x2d5c14u;
    // NOP
    // 0x2d5c18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d5c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5c1c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x2D5C1Cu;
    {
        const bool branch_taken_0x2d5c1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5c1c) {
            ctx->pc = 0x2D5CDCu;
            goto label_2d5cdc;
        }
    }
    ctx->pc = 0x2D5C24u;
    // 0x2d5c24: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d5c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5c28: 0x24820034  addiu       $v0, $a0, 0x34
    ctx->pc = 0x2d5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x2d5c2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c34: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5C34u;
    SET_GPR_U32(ctx, 31, 0x2D5C3Cu);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5C34u, 0x2D5C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C3Cu;
label_2d5c3c:
    // 0x2d5c3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d5c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5c40: 0x90850038  lbu         $a1, 0x38($a0)
    ctx->pc = 0x2d5c40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2d5c44: 0x14a00025  bnez        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D5C44u;
    {
        const bool branch_taken_0x2d5c44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5c44) {
            ctx->pc = 0x2D5CDCu;
            goto label_2d5cdc;
        }
    }
    ctx->pc = 0x2D5C4Cu;
    // 0x2d5c4c: 0x8fa701e0  lw          $a3, 0x1E0($sp)
    ctx->pc = 0x2d5c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5c50: 0x24e20034  addiu       $v0, $a3, 0x34
    ctx->pc = 0x2d5c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 52));
    // 0x2d5c54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c5c: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5C5Cu;
    SET_GPR_U32(ctx, 31, 0x2D5C64u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5C5Cu, 0x2D5C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C64u;
label_2d5c64:
    // 0x2d5c64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d5c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2d5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d5c6c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d5c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5c70: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2d5c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d5c74: 0xc0b5ad0  jal         func_2D6B40
    ctx->pc = 0x2D5C74u;
    SET_GPR_U32(ctx, 31, 0x2D5C7Cu);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x2D5C74u, 0x2D5C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C7Cu;
label_2d5c7c:
    // 0x2d5c7c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d5c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5c80: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d5c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d5c84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c88: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5C88u;
    SET_GPR_U32(ctx, 31, 0x2D5C90u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5C88u, 0x2D5C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C90u;
label_2d5c90:
    // 0x2d5c90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5c98: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2d5c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x2d5c9c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5ca0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d5ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d5ca4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ca8: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5CA8u;
    SET_GPR_U32(ctx, 31, 0x2D5CB0u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5CA8u, 0x2D5CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5CB0u;
label_2d5cb0:
    // 0x2d5cb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d5cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5cb4: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x2d5cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d5cb8: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2d5cb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d5cbc: 0x8c490018  lw          $t1, 0x18($v0)
    ctx->pc = 0x2d5cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d5cc0: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2d5cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5cc4: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x2d5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x2d5cc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d5cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ccc: 0x25060014  addiu       $a2, $t0, 0x14
    ctx->pc = 0x2d5cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x2d5cd0: 0xc0ad4f8  jal         func_2B53E0
    ctx->pc = 0x2D5CD0u;
    SET_GPR_U32(ctx, 31, 0x2D5CD8u);
    ctx->pc = 0x2B53E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B53E0u, 0x2D5CD0u, 0x2D5CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5CD8u;
label_2d5cd8:
    // 0x2d5cd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d5cd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d5cdc:
    // 0x2d5cdc: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2d5cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5ce0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d5ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d5ce4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ce8: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5CE8u;
    SET_GPR_U32(ctx, 31, 0x2D5CF0u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5CE8u, 0x2D5CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5CF0u;
label_2d5cf0:
    // 0x2d5cf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5cf4: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d5cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d5cf8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d5cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d5cfc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D5CFCu;
    SET_GPR_U32(ctx, 31, 0x2D5D04u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D5CFCu, 0x2D5D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D04u;
label_2d5d04:
    // 0x2d5d04: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2d5d04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d08: 0xafa8019c  sw          $t0, 0x19C($sp)
    ctx->pc = 0x2d5d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 8));
    // 0x2d5d0c: 0x8fa9019c  lw          $t1, 0x19C($sp)
    ctx->pc = 0x2d5d0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x2d5d10: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2d5d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d14: 0xc096880  jal         func_25A200
    ctx->pc = 0x2D5D14u;
    SET_GPR_U32(ctx, 31, 0x2D5D1Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2D5D14u, 0x2D5D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D1Cu;
label_2d5d1c:
    // 0x2d5d1c: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2D5D1Cu;
    {
        const bool branch_taken_0x2d5d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5d1c) {
            ctx->pc = 0x2D5E94u;
            goto label_2d5e94;
        }
    }
    ctx->pc = 0x2D5D24u;
    // 0x2d5d24: 0x8fa4019c  lw          $a0, 0x19C($sp)
    ctx->pc = 0x2d5d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x2d5d28: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x2d5d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2d5d2c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d5d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d5d30: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x2D5D30u;
    {
        const bool branch_taken_0x2d5d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5d30) {
            ctx->pc = 0x2D5E94u;
            goto label_2d5e94;
        }
    }
    ctx->pc = 0x2D5D38u;
    // 0x2d5d38: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d5d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5d3c: 0x24820034  addiu       $v0, $a0, 0x34
    ctx->pc = 0x2d5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x2d5d40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d48: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5D48u;
    SET_GPR_U32(ctx, 31, 0x2D5D50u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5D48u, 0x2D5D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D50u;
label_2d5d50:
    // 0x2d5d50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5d54: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d5d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5d58: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2d5d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d5d5c: 0xc0b4a64  jal         func_2D2990
    ctx->pc = 0x2D5D5Cu;
    SET_GPR_U32(ctx, 31, 0x2D5D64u);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x2D5D5Cu, 0x2D5D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D64u;
label_2d5d64:
    // 0x2d5d64: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2D5D64u;
    {
        const bool branch_taken_0x2d5d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5d64) {
            ctx->pc = 0x2D5E94u;
            goto label_2d5e94;
        }
    }
    ctx->pc = 0x2D5D6Cu;
label_2d5d6c:
    // 0x2d5d6c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d5d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5d70: 0x24820034  addiu       $v0, $a0, 0x34
    ctx->pc = 0x2d5d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x2d5d74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d7c: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5D7Cu;
    SET_GPR_U32(ctx, 31, 0x2D5D84u);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5D7Cu, 0x2D5D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D84u;
label_2d5d84:
    // 0x2d5d84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d88: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2d5d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5d8c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2d5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2d5d90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d94: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2d5d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2d5d98: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D5D98u;
    SET_GPR_U32(ctx, 31, 0x2D5DA0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D5D98u, 0x2D5DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5DA0u;
label_2d5da0:
    // 0x2d5da0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d5da0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5da4: 0xafa30198  sw          $v1, 0x198($sp)
    ctx->pc = 0x2d5da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 3));
    // 0x2d5da8: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x2d5da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2d5dac: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x2D5DACu;
    SET_GPR_U32(ctx, 31, 0x2D5DB4u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2D5DACu, 0x2D5DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5DB4u;
label_2d5db4:
    // 0x2d5db4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2d5db4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5db8: 0x12c00036  beqz        $s6, . + 4 + (0x36 << 2)
    ctx->pc = 0x2D5DB8u;
    {
        const bool branch_taken_0x2d5db8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5db8) {
            ctx->pc = 0x2D5E94u;
            goto label_2d5e94;
        }
    }
    ctx->pc = 0x2D5DC0u;
    // 0x2d5dc0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d5dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5dc4: 0xc0ae4b4  jal         func_2B92D0
    ctx->pc = 0x2D5DC4u;
    SET_GPR_U32(ctx, 31, 0x2D5DCCu);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2D5DC4u, 0x2D5DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5DCCu;
label_2d5dcc:
    // 0x2d5dcc: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2D5DCCu;
    {
        const bool branch_taken_0x2d5dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5dcc) {
            ctx->pc = 0x2D5E94u;
            goto label_2d5e94;
        }
    }
    ctx->pc = 0x2D5DD4u;
    // 0x2d5dd4: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2d5dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5dd8: 0x24820034  addiu       $v0, $a0, 0x34
    ctx->pc = 0x2d5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x2d5ddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5de0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5de4: 0xc0b57b8  jal         func_2D5EE0
    ctx->pc = 0x2D5DE4u;
    SET_GPR_U32(ctx, 31, 0x2D5DECu);
    ctx->pc = 0x2D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EE0u, 0x2D5DE4u, 0x2D5DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5DECu;
label_2d5dec:
    // 0x2d5dec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d5decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5df0: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x2d5df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2d5df4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d5df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5df8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2d5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d5dfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d5dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e00: 0xc0b4db0  jal         func_2D36C0
    ctx->pc = 0x2D5E00u;
    SET_GPR_U32(ctx, 31, 0x2D5E08u);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2D5E00u, 0x2D5E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E08u;
label_2d5e08:
    // 0x2d5e08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e0c: 0x14800021  bnez        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D5E0Cu;
    {
        const bool branch_taken_0x2d5e0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5e0c) {
            ctx->pc = 0x2D5E94u;
            goto label_2d5e94;
        }
    }
    ctx->pc = 0x2D5E14u;
    // 0x2d5e14: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d5e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e18: 0xc0ae4b4  jal         func_2B92D0
    ctx->pc = 0x2D5E18u;
    SET_GPR_U32(ctx, 31, 0x2D5E20u);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2D5E18u, 0x2D5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E20u;
label_2d5e20:
    // 0x2d5e20: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2d5e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2d5e24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d5e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e28: 0xc0513f0  jal         func_144FC0
    ctx->pc = 0x2D5E28u;
    SET_GPR_U32(ctx, 31, 0x2D5E30u);
    ctx->pc = 0x144FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FC0u, 0x2D5E28u, 0x2D5E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E30u;
label_2d5e30:
    // 0x2d5e30: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x2d5e30u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d5e34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d5e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d5e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e3c: 0xc099f94  jal         func_267E50
    ctx->pc = 0x2D5E3Cu;
    SET_GPR_U32(ctx, 31, 0x2D5E44u);
    ctx->pc = 0x267E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267E50u, 0x2D5E3Cu, 0x2D5E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E44u;
label_2d5e44:
    // 0x2d5e44: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D5E44u;
    {
        const bool branch_taken_0x2d5e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5e44) {
            ctx->pc = 0x2D5E94u;
            goto label_2d5e94;
        }
    }
    ctx->pc = 0x2D5E4Cu;
    // 0x2d5e4c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d5e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e50: 0xc0ae4b4  jal         func_2B92D0
    ctx->pc = 0x2D5E50u;
    SET_GPR_U32(ctx, 31, 0x2D5E58u);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2D5E50u, 0x2D5E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E58u;
label_2d5e58:
    // 0x2d5e58: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2d5e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2d5e5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d5e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e60: 0xc0513f0  jal         func_144FC0
    ctx->pc = 0x2D5E60u;
    SET_GPR_U32(ctx, 31, 0x2D5E68u);
    ctx->pc = 0x144FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FC0u, 0x2D5E60u, 0x2D5E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E68u;
label_2d5e68:
    // 0x2d5e68: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x2d5e68u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d5e6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d5e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5e70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d5e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e74: 0xc099f94  jal         func_267E50
    ctx->pc = 0x2D5E74u;
    SET_GPR_U32(ctx, 31, 0x2D5E7Cu);
    ctx->pc = 0x267E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267E50u, 0x2D5E74u, 0x2D5E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E7Cu;
label_2d5e7c:
    // 0x2d5e7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5E7Cu;
    {
        const bool branch_taken_0x2d5e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5e7c) {
            ctx->pc = 0x2D5E94u;
            goto label_2d5e94;
        }
    }
    ctx->pc = 0x2D5E84u;
    // 0x2d5e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d5e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e8c: 0xc0969e4  jal         func_25A790
    ctx->pc = 0x2D5E8Cu;
    SET_GPR_U32(ctx, 31, 0x2D5E94u);
    ctx->pc = 0x25A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A790u, 0x2D5E8Cu, 0x2D5E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E94u;
label_2d5e94:
    // 0x2d5e94: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2d5e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d5e98: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2d5e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e9c:
    // 0x2d5e9c: 0x8fa401d4  lw          $a0, 0x1D4($sp)
    ctx->pc = 0x2d5e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x2d5ea0: 0x204182b  sltu        $v1, $s0, $a0
    ctx->pc = 0x2d5ea0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d5ea4: 0x1460fcca  bnez        $v1, . + 4 + (-0x336 << 2)
    ctx->pc = 0x2D5EA4u;
    {
        const bool branch_taken_0x2d5ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5ea4) {
            ctx->pc = 0x2D51D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d51d0;
        }
    }
    ctx->pc = 0x2D5EACu;
label_2d5eac:
    // 0x2d5eac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d5eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d5eb0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d5eb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d5eb4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d5eb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d5eb8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d5eb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d5ebc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d5ebcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d5ec0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d5ec0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5ec4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d5ec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5ec8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d5ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5ecc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d5eccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5ed0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d5ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5ed4: 0x27bd01f0  addiu       $sp, $sp, 0x1F0
    ctx->pc = 0x2d5ed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2d5ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5EE0u;
}
