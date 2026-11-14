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

// Function: sub_0017E3A0
// Address: 0x17e3a0 - 0x17ed00
void sub_0017E3A0_0x17e3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E3A0_0x17e3a0");
#endif

    switch (ctx->pc) {
        case 0x17e3e8u: goto label_17e3e8;
        case 0x17e3f4u: goto label_17e3f4;
        case 0x17e420u: goto label_17e420;
        case 0x17e430u: goto label_17e430;
        case 0x17e498u: goto label_17e498;
        case 0x17e4acu: goto label_17e4ac;
        case 0x17e4c0u: goto label_17e4c0;
        case 0x17e4d8u: goto label_17e4d8;
        case 0x17e4ecu: goto label_17e4ec;
        case 0x17e500u: goto label_17e500;
        case 0x17e51cu: goto label_17e51c;
        case 0x17e534u: goto label_17e534;
        case 0x17e55cu: goto label_17e55c;
        case 0x17e588u: goto label_17e588;
        case 0x17e5a8u: goto label_17e5a8;
        case 0x17e5d4u: goto label_17e5d4;
        case 0x17e5f4u: goto label_17e5f4;
        case 0x17e620u: goto label_17e620;
        case 0x17e634u: goto label_17e634;
        case 0x17e664u: goto label_17e664;
        case 0x17e68cu: goto label_17e68c;
        case 0x17e6b8u: goto label_17e6b8;
        case 0x17e6e0u: goto label_17e6e0;
        case 0x17e70cu: goto label_17e70c;
        case 0x17e734u: goto label_17e734;
        case 0x17e760u: goto label_17e760;
        case 0x17e774u: goto label_17e774;
        case 0x17e7a8u: goto label_17e7a8;
        case 0x17e7ccu: goto label_17e7cc;
        case 0x17e7f8u: goto label_17e7f8;
        case 0x17e818u: goto label_17e818;
        case 0x17e848u: goto label_17e848;
        case 0x17e8e4u: goto label_17e8e4;
        case 0x17e914u: goto label_17e914;
        case 0x17e930u: goto label_17e930;
        case 0x17e95cu: goto label_17e95c;
        case 0x17e980u: goto label_17e980;
        case 0x17e9acu: goto label_17e9ac;
        case 0x17e9c0u: goto label_17e9c0;
        case 0x17e9ecu: goto label_17e9ec;
        case 0x17ea00u: goto label_17ea00;
        case 0x17ea34u: goto label_17ea34;
        case 0x17ea64u: goto label_17ea64;
        case 0x17ea80u: goto label_17ea80;
        case 0x17eab0u: goto label_17eab0;
        case 0x17eaccu: goto label_17eacc;
        case 0x17eb04u: goto label_17eb04;
        case 0x17eba8u: goto label_17eba8;
        case 0x17ebbcu: goto label_17ebbc;
        case 0x17ebdcu: goto label_17ebdc;
        case 0x17ebf0u: goto label_17ebf0;
        case 0x17ec08u: goto label_17ec08;
        case 0x17ec20u: goto label_17ec20;
        case 0x17ec40u: goto label_17ec40;
        case 0x17ec5cu: goto label_17ec5c;
        case 0x17ec78u: goto label_17ec78;
        case 0x17eca8u: goto label_17eca8;
        case 0x17ecb8u: goto label_17ecb8;
        case 0x17ecd0u: goto label_17ecd0;
        default: break;
    }

    ctx->pc = 0x17e3a0u;

    // 0x17e3a0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x17e3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x17e3a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17e3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17e3a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17e3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17e3ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17e3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17e3b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17e3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17e3b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17e3b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17e3bc: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x17e3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x17e3c0: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x17e3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x17e3c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17e3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e3c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e3cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e3d0: 0x0  nop
    ctx->pc = 0x17e3d0u;
    // NOP
    // 0x17e3d4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x17e3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x17e3d8: 0xa3a000bf  sb          $zero, 0xBF($sp)
    ctx->pc = 0x17e3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 191), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e3dc: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x17e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17e3e0: 0xc0495d4  jal         func_125750
    ctx->pc = 0x17E3E0u;
    SET_GPR_U32(ctx, 31, 0x17E3E8u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x17E3E0u, 0x17E3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E3E8u;
label_17e3e8:
    // 0x17e3e8: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x17e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x17e3ec: 0xc0495d4  jal         func_125750
    ctx->pc = 0x17E3ECu;
    SET_GPR_U32(ctx, 31, 0x17E3F4u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x17E3ECu, 0x17E3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E3F4u;
label_17e3f4:
    // 0x17e3f4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x17e3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e3f8: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x17e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x17e3fc: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x17e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17e400: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x17E400u;
    {
        const bool branch_taken_0x17e400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x17e400) {
            ctx->pc = 0x17E438u;
            goto label_17e438;
        }
    }
    ctx->pc = 0x17E408u;
    // 0x17e408: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x17e408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x17e40c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x17e40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e410: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x17e410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e414: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x17e414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e418: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x17E418u;
    SET_GPR_U32(ctx, 31, 0x17E420u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x17E418u, 0x17E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E420u;
label_17e420:
    // 0x17e420: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x17e420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17e424: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17e424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e428: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x17E428u;
    SET_GPR_U32(ctx, 31, 0x17E430u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x17E428u, 0x17E430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E430u;
label_17e430:
    // 0x17e430: 0x10000227  b           . + 4 + (0x227 << 2)
    ctx->pc = 0x17E430u;
    {
        const bool branch_taken_0x17e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e430) {
            ctx->pc = 0x17ECD0u;
            goto label_17ecd0;
        }
    }
    ctx->pc = 0x17E438u;
label_17e438:
    // 0x17e438: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e43c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x17e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x17e440: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17e440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e444: 0x8fb300d0  lw          $s3, 0xD0($sp)
    ctx->pc = 0x17e444u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17e448: 0x2711823  subu        $v1, $s3, $s1
    ctx->pc = 0x17e448u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x17e44c: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x17e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x17e450: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x17e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x17e454: 0x104001c6  beqz        $v0, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x17E454u;
    {
        const bool branch_taken_0x17e454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e454) {
            ctx->pc = 0x17EB70u;
            goto label_17eb70;
        }
    }
    ctx->pc = 0x17E45Cu;
    // 0x17e45c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17e45cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e460: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e464: 0x905300ac  lbu         $s3, 0xAC($v0)
    ctx->pc = 0x17e464u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x17e468: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E468u;
    {
        const bool branch_taken_0x17e468 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e468) {
            ctx->pc = 0x17E484u;
            goto label_17e484;
        }
    }
    ctx->pc = 0x17E470u;
    // 0x17e470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e474: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x17e474u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17e478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e47c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e480: 0xa04300ac  sb          $v1, 0xAC($v0)
    ctx->pc = 0x17e480u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 172), (uint8_t)GPR_U32(ctx, 3));
label_17e484:
    // 0x17e484: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x17e484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x17e488: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17e488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17e48c: 0x24a55020  addiu       $a1, $a1, 0x5020
    ctx->pc = 0x17e48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20512));
    // 0x17e490: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x17E490u;
    SET_GPR_U32(ctx, 31, 0x17E498u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x17E490u, 0x17E498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E498u;
label_17e498:
    // 0x17e498: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x17e498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17e49c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17e49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17e4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4a4: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x17E4A4u;
    SET_GPR_U32(ctx, 31, 0x17E4ACu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x17E4A4u, 0x17E4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4ACu;
label_17e4ac:
    // 0x17e4ac: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x17e4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x17e4b0: 0x27a500b4  addiu       $a1, $sp, 0xB4
    ctx->pc = 0x17e4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x17e4b4: 0x278690f0  addiu       $a2, $gp, -0x6F10
    ctx->pc = 0x17e4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938864));
    // 0x17e4b8: 0xc05fb40  jal         func_17ED00
    ctx->pc = 0x17E4B8u;
    SET_GPR_U32(ctx, 31, 0x17E4C0u);
    ctx->pc = 0x17ED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ED00u, 0x17E4B8u, 0x17E4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4C0u;
label_17e4c0:
    // 0x17e4c0: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x17e4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x17e4c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17e4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4c8: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x17e4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x17e4cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x17e4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4d0: 0xc1195a4  jal         func_465690
    ctx->pc = 0x17E4D0u;
    SET_GPR_U32(ctx, 31, 0x17E4D8u);
    ctx->pc = 0x465690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465690u, 0x17E4D0u, 0x17E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4D8u;
label_17e4d8:
    // 0x17e4d8: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x17e4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x17e4dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17e4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17e4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e4e4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x17E4E4u;
    SET_GPR_U32(ctx, 31, 0x17E4ECu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x17E4E4u, 0x17E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4ECu;
label_17e4ec:
    // 0x17e4ec: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x17e4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17e4f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17e4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4f4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x17e4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17e4f8: 0xc059640  jal         func_165900
    ctx->pc = 0x17E4F8u;
    SET_GPR_U32(ctx, 31, 0x17E500u);
    ctx->pc = 0x165900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165900u, 0x17E4F8u, 0x17E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E500u;
label_17e500:
    // 0x17e500: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e504: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x17e504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17e508: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17e508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e50c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e510: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17e510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e514: 0xc059668  jal         func_1659A0
    ctx->pc = 0x17E514u;
    SET_GPR_U32(ctx, 31, 0x17E51Cu);
    ctx->pc = 0x1659A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659A0u, 0x17E514u, 0x17E51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E51Cu;
label_17e51c:
    // 0x17e51c: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x17e51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17e520: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x17e520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e524: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x17e524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x17e528: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17e528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e52c: 0xc059698  jal         func_165A60
    ctx->pc = 0x17E52Cu;
    SET_GPR_U32(ctx, 31, 0x17E534u);
    ctx->pc = 0x165A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A60u, 0x17E52Cu, 0x17E534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E534u;
label_17e534:
    // 0x17e534: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x17e534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x17e538: 0x18a000e0  blez        $a1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x17E538u;
    {
        const bool branch_taken_0x17e538 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x17e538) {
            ctx->pc = 0x17E8BCu;
            goto label_17e8bc;
        }
    }
    ctx->pc = 0x17E540u;
    // 0x17e540: 0x124000c1  beqz        $s2, . + 4 + (0xC1 << 2)
    ctx->pc = 0x17E540u;
    {
        const bool branch_taken_0x17e540 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e540) {
            ctx->pc = 0x17E848u;
            goto label_17e848;
        }
    }
    ctx->pc = 0x17E548u;
    // 0x17e548: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e54c: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17e54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17e550: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17e550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e554: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17E554u;
    SET_GPR_U32(ctx, 31, 0x17E55Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17E554u, 0x17E55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E55Cu;
label_17e55c:
    // 0x17e55c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17e55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e560: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e564: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17e564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17e568: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17e568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17e56c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17e570: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x17e570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e574: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x17e574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17e578: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e578u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e57c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e57cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e580: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17E580u;
    SET_GPR_U32(ctx, 31, 0x17E588u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17E580u, 0x17E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E588u;
label_17e588:
    // 0x17e588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e58c: 0xa3a200bf  sb          $v0, 0xBF($sp)
    ctx->pc = 0x17e58cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 191), (uint8_t)GPR_U32(ctx, 2));
    // 0x17e590: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x17e590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e594: 0x2485005c  addiu       $a1, $a0, 0x5C
    ctx->pc = 0x17e594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x17e598: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17e598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e59c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17e59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e5a0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17E5A0u;
    SET_GPR_U32(ctx, 31, 0x17E5A8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17E5A0u, 0x17E5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E5A8u;
label_17e5a8:
    // 0x17e5a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17e5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e5ac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e5b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17e5b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17e5b4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17e5b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17e5b8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17e5bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17e5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17e5c0: 0x27a700bf  addiu       $a3, $sp, 0xBF
    ctx->pc = 0x17e5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 191));
    // 0x17e5c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e5c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e5c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e5c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e5cc: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17E5CCu;
    SET_GPR_U32(ctx, 31, 0x17E5D4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17E5CCu, 0x17E5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E5D4u;
label_17e5d4:
    // 0x17e5d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17e5d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e5d8: 0x0  nop
    ctx->pc = 0x17e5d8u;
    // NOP
    // 0x17e5dc: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x17e5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x17e5e0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e5e4: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17e5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17e5e8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17e5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e5ec: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17E5ECu;
    SET_GPR_U32(ctx, 31, 0x17E5F4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17E5ECu, 0x17E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E5F4u;
label_17e5f4:
    // 0x17e5f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17e5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e5f8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e5fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17e5fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17e600: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17e600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17e604: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17e604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17e608: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17e608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e60c: 0x27a700b8  addiu       $a3, $sp, 0xB8
    ctx->pc = 0x17e60cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x17e610: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e614: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e614u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e618: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17E618u;
    SET_GPR_U32(ctx, 31, 0x17E620u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17E618u, 0x17E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E620u;
label_17e620:
    // 0x17e620: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e624: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17e624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17e628: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17e628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e62c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17E62Cu;
    SET_GPR_U32(ctx, 31, 0x17E634u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17E62Cu, 0x17E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E634u;
label_17e634:
    // 0x17e634: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17e634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e638: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x17e638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e63c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e640: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17e640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17e644: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17e644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17e648: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17e648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x17e64c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17e64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e650: 0x244700a4  addiu       $a3, $v0, 0xA4
    ctx->pc = 0x17e650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x17e654: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e658: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e658u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e65c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17E65Cu;
    SET_GPR_U32(ctx, 31, 0x17E664u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17E65Cu, 0x17E664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E664u;
label_17e664:
    // 0x17e664: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17e664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x17e668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e66c: 0x0  nop
    ctx->pc = 0x17e66cu;
    // NOP
    // 0x17e670: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x17e670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x17e674: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x17e674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x17e678: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e67c: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17e67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17e680: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17e680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e684: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17E684u;
    SET_GPR_U32(ctx, 31, 0x17E68Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17E684u, 0x17E68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E68Cu;
label_17e68c:
    // 0x17e68c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17e68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e690: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e694: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17e694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17e698: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17e698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17e69c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17e69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17e6a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17e6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e6a4: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x17e6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x17e6a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e6a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e6ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e6acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e6b0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17E6B0u;
    SET_GPR_U32(ctx, 31, 0x17E6B8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17E6B0u, 0x17E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E6B8u;
label_17e6b8:
    // 0x17e6b8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x17e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x17e6bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e6bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e6c0: 0x0  nop
    ctx->pc = 0x17e6c0u;
    // NOP
    // 0x17e6c4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x17e6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x17e6c8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x17e6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x17e6cc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e6d0: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17e6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17e6d4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17e6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e6d8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17E6D8u;
    SET_GPR_U32(ctx, 31, 0x17E6E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17E6D8u, 0x17E6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E6E0u;
label_17e6e0:
    // 0x17e6e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17e6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e6e4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e6e8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17e6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17e6ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17e6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e6f0: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x17e6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x17e6f4: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x17e6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17e6f8: 0xc78d81a0  lwc1        $f13, -0x7E60($gp)
    ctx->pc = 0x17e6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x17e6fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e6fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e700: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e700u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e704: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17E704u;
    SET_GPR_U32(ctx, 31, 0x17E70Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17E704u, 0x17E70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E70Cu;
label_17e70c:
    // 0x17e70c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e714: 0x0  nop
    ctx->pc = 0x17e714u;
    // NOP
    // 0x17e718: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x17e718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x17e71c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x17e71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x17e720: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e724: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17e724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17e728: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17e728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e72c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17E72Cu;
    SET_GPR_U32(ctx, 31, 0x17E734u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17E72Cu, 0x17E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E734u;
label_17e734:
    // 0x17e734: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17e734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e738: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e73c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17e73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17e740: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17e740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e744: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x17e744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x17e748: 0xc78c81a0  lwc1        $f12, -0x7E60($gp)
    ctx->pc = 0x17e748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17e74c: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x17e74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x17e750: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e754: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e754u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e758: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17E758u;
    SET_GPR_U32(ctx, 31, 0x17E760u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17E758u, 0x17E760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E760u;
label_17e760:
    // 0x17e760: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e764: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17e764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17e768: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17e768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e76c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17E76Cu;
    SET_GPR_U32(ctx, 31, 0x17E774u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17E76Cu, 0x17E774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E774u;
label_17e774:
    // 0x17e774: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17e774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e778: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x17e778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e77c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x17e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e780: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e784: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x17e784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17e788: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x17e788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x17e78c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17e78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e790: 0x2467009c  addiu       $a3, $v1, 0x9C
    ctx->pc = 0x17e790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
    // 0x17e794: 0xc78c8204  lwc1        $f12, -0x7DFC($gp)
    ctx->pc = 0x17e794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17e798: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e79c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e79cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7a0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17E7A0u;
    SET_GPR_U32(ctx, 31, 0x17E7A8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17E7A0u, 0x17E7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E7A8u;
label_17e7a8:
    // 0x17e7a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e7ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e7b0: 0x0  nop
    ctx->pc = 0x17e7b0u;
    // NOP
    // 0x17e7b4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x17e7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x17e7b8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e7bc: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17e7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17e7c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17e7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e7c4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17E7C4u;
    SET_GPR_U32(ctx, 31, 0x17E7CCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17E7C4u, 0x17E7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E7CCu;
label_17e7cc:
    // 0x17e7cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17e7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e7d0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e7d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17e7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17e7d8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17e7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17e7dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17e7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e7e0: 0x27a700b8  addiu       $a3, $sp, 0xB8
    ctx->pc = 0x17e7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x17e7e4: 0xc78d8294  lwc1        $f13, -0x7D6C($gp)
    ctx->pc = 0x17e7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x17e7e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e7e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e7ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7f0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17E7F0u;
    SET_GPR_U32(ctx, 31, 0x17E7F8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17E7F0u, 0x17E7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E7F8u;
label_17e7f8:
    // 0x17e7f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17e7f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e7fc: 0x0  nop
    ctx->pc = 0x17e7fcu;
    // NOP
    // 0x17e800: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x17e800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x17e804: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e808: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17e808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17e80c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17e80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e810: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17E810u;
    SET_GPR_U32(ctx, 31, 0x17E818u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17E810u, 0x17E818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E818u;
label_17e818:
    // 0x17e818: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17e818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e81c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x17e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e820: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e824: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x17e824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17e828: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17e828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x17e82c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17e82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e830: 0x27a700b8  addiu       $a3, $sp, 0xB8
    ctx->pc = 0x17e830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x17e834: 0xc78c8298  lwc1        $f12, -0x7D68($gp)
    ctx->pc = 0x17e834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17e838: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e83c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e83cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e840: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17E840u;
    SET_GPR_U32(ctx, 31, 0x17E848u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17E840u, 0x17E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E848u;
label_17e848:
    // 0x17e848: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x17e848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17e84c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x17e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x17e850: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x17e850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x17e854: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17e854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17e858: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x17e858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e85c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17e85cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17e860: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17e860u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17e864: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17e864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x17e868: 0x0  nop
    ctx->pc = 0x17e868u;
    // NOP
    // 0x17e86c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17e870: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x17e870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17e874: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E874u;
    {
        const bool branch_taken_0x17e874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e874) {
            ctx->pc = 0x17E888u;
            goto label_17e888;
        }
    }
    ctx->pc = 0x17E87Cu;
    // 0x17e87c: 0x8fb400d0  lw          $s4, 0xD0($sp)
    ctx->pc = 0x17e87cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17e880: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17E880u;
    {
        const bool branch_taken_0x17e880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e880) {
            ctx->pc = 0x17E8ACu;
            goto label_17e8ac;
        }
    }
    ctx->pc = 0x17E888u;
label_17e888:
    // 0x17e888: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x17e888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x17e88c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x17e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x17e890: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17e890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17e894: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x17e894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e898: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17e898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17e89c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17e89cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17e8a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17e8a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x17e8a4: 0x0  nop
    ctx->pc = 0x17e8a4u;
    // NOP
    // 0x17e8a8: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x17e8a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_17e8ac:
    // 0x17e8ac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e8b0: 0xac540094  sw          $s4, 0x94($v0)
    ctx->pc = 0x17e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 20));
    // 0x17e8b4: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x17E8B4u;
    {
        const bool branch_taken_0x17e8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e8b4) {
            ctx->pc = 0x17EB70u;
            goto label_17eb70;
        }
    }
    ctx->pc = 0x17E8BCu;
label_17e8bc:
    // 0x17e8bc: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x17e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x17e8c0: 0x44100ab  bgez        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x17E8C0u;
    {
        const bool branch_taken_0x17e8c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17e8c0) {
            ctx->pc = 0x17EB70u;
            goto label_17eb70;
        }
    }
    ctx->pc = 0x17E8C8u;
    // 0x17e8c8: 0x1240008e  beqz        $s2, . + 4 + (0x8E << 2)
    ctx->pc = 0x17E8C8u;
    {
        const bool branch_taken_0x17e8c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e8c8) {
            ctx->pc = 0x17EB04u;
            goto label_17eb04;
        }
    }
    ctx->pc = 0x17E8D0u;
    // 0x17e8d0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e8d4: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17e8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17e8d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17e8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17e8dc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17E8DCu;
    SET_GPR_U32(ctx, 31, 0x17E8E4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17E8DCu, 0x17E8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E8E4u;
label_17e8e4:
    // 0x17e8e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17e8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e8e8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x17e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e8ec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e8f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17e8f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17e8f4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17e8f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17e8f8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x17e8fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17e8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e900: 0x2447009c  addiu       $a3, $v0, 0x9C
    ctx->pc = 0x17e900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
    // 0x17e904: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e908: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e908u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e90c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17E90Cu;
    SET_GPR_U32(ctx, 31, 0x17E914u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17E90Cu, 0x17E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E914u;
label_17e914:
    // 0x17e914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e918: 0xa3a200bf  sb          $v0, 0xBF($sp)
    ctx->pc = 0x17e918u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 191), (uint8_t)GPR_U32(ctx, 2));
    // 0x17e91c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e920: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17e920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17e924: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17e924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17e928: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17E928u;
    SET_GPR_U32(ctx, 31, 0x17E930u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17E928u, 0x17E930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E930u;
label_17e930:
    // 0x17e930: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17e930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e934: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e938: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17e938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17e93c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17e93cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17e940: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17e940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17e944: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17e944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17e948: 0x27a700bf  addiu       $a3, $sp, 0xBF
    ctx->pc = 0x17e948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 191));
    // 0x17e94c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e94cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e950: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e954: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17E954u;
    SET_GPR_U32(ctx, 31, 0x17E95Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17E954u, 0x17E95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E95Cu;
label_17e95c:
    // 0x17e95c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e964: 0x0  nop
    ctx->pc = 0x17e964u;
    // NOP
    // 0x17e968: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x17e968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x17e96c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e970: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17e970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17e974: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17e974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17e978: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17E978u;
    SET_GPR_U32(ctx, 31, 0x17E980u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17E978u, 0x17E980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E980u;
label_17e980:
    // 0x17e980: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17e980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e984: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e988: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17e988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17e98c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17e98cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17e990: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17e990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17e994: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17e994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e998: 0x27a700b8  addiu       $a3, $sp, 0xB8
    ctx->pc = 0x17e998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x17e99c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e99cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e9a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9a4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17E9A4u;
    SET_GPR_U32(ctx, 31, 0x17E9ACu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17E9A4u, 0x17E9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E9ACu;
label_17e9ac:
    // 0x17e9ac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e9b0: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17e9b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17e9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17e9b8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17E9B8u;
    SET_GPR_U32(ctx, 31, 0x17E9C0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17E9B8u, 0x17E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E9C0u;
label_17e9c0:
    // 0x17e9c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17e9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e9c4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e9c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17e9c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17e9cc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17e9ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17e9d0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17e9d4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x17e9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e9d8: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x17e9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17e9dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e9dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e9e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9e4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17E9E4u;
    SET_GPR_U32(ctx, 31, 0x17E9ECu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17E9E4u, 0x17E9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E9ECu;
label_17e9ec:
    // 0x17e9ec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17e9f0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17e9f4: 0x2445009c  addiu       $a1, $v0, 0x9C
    ctx->pc = 0x17e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
    // 0x17e9f8: 0xc05db24  jal         func_176C90
    ctx->pc = 0x17E9F8u;
    SET_GPR_U32(ctx, 31, 0x17EA00u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x17E9F8u, 0x17EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA00u;
label_17ea00:
    // 0x17ea00: 0xc78381b8  lwc1        $f3, -0x7E48($gp)
    ctx->pc = 0x17ea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17ea04: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x17ea04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17ea08: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x17ea08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ea0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ea0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ea10: 0x0  nop
    ctx->pc = 0x17ea10u;
    // NOP
    // 0x17ea14: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x17ea14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x17ea18: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x17ea18u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x17ea1c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x17ea1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x17ea20: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17ea24: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17ea28: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17ea28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17ea2c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17EA2Cu;
    SET_GPR_U32(ctx, 31, 0x17EA34u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17EA2Cu, 0x17EA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA34u;
label_17ea34:
    // 0x17ea34: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17ea34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ea38: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x17ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17ea3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17ea3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ea40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17ea44: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x17ea44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17ea48: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x17ea4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17ea4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea50: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x17ea50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17ea54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17ea54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17ea58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea5c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17EA5Cu;
    SET_GPR_U32(ctx, 31, 0x17EA64u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17EA5Cu, 0x17EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA64u;
label_17ea64:
    // 0x17ea64: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x17ea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ea68: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x17ea68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x17ea6c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17ea70: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17ea74: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17ea74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17ea78: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17EA78u;
    SET_GPR_U32(ctx, 31, 0x17EA80u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17EA78u, 0x17EA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA80u;
label_17ea80:
    // 0x17ea80: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17ea80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ea84: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x17ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17ea88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17ea88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ea8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17ea90: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x17ea90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17ea94: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x17ea98: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17ea98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ea9c: 0x27a700b8  addiu       $a3, $sp, 0xB8
    ctx->pc = 0x17ea9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x17eaa0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17eaa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eaa4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17eaa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eaa8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17EAA8u;
    SET_GPR_U32(ctx, 31, 0x17EAB0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17EAA8u, 0x17EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAB0u;
label_17eab0:
    // 0x17eab0: 0xa3a000bf  sb          $zero, 0xBF($sp)
    ctx->pc = 0x17eab0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 191), (uint8_t)GPR_U32(ctx, 0));
    // 0x17eab4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17eab8: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17eabc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17eac0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17eac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eac4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17EAC4u;
    SET_GPR_U32(ctx, 31, 0x17EACCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17EAC4u, 0x17EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EACCu;
label_17eacc:
    // 0x17eacc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17eaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ead0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17ead4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x17ead4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17ead8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17ead8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17eadc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17eadcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17eae0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17eae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17eae4: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x17eae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x17eae8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17eae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eaec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17eaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17eaf0: 0x27a700bf  addiu       $a3, $sp, 0xBF
    ctx->pc = 0x17eaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 191));
    // 0x17eaf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17eaf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eaf8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17eaf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eafc: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17EAFCu;
    SET_GPR_U32(ctx, 31, 0x17EB04u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17EAFCu, 0x17EB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB04u;
label_17eb04:
    // 0x17eb04: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x17eb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17eb08: 0x8f85bb70  lw          $a1, -0x4490($gp)
    ctx->pc = 0x17eb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x17eb0c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x17eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x17eb10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17eb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17eb14: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x17eb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17eb18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17eb18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17eb1c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17eb1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17eb20: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17eb20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x17eb24: 0x0  nop
    ctx->pc = 0x17eb24u;
    // NOP
    // 0x17eb28: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x17eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17eb2c: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x17eb2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x17eb30: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EB30u;
    {
        const bool branch_taken_0x17eb30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eb30) {
            ctx->pc = 0x17EB44u;
            goto label_17eb44;
        }
    }
    ctx->pc = 0x17EB38u;
    // 0x17eb38: 0x8fb300d0  lw          $s3, 0xD0($sp)
    ctx->pc = 0x17eb38u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17eb3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17EB3Cu;
    {
        const bool branch_taken_0x17eb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eb3c) {
            ctx->pc = 0x17EB68u;
            goto label_17eb68;
        }
    }
    ctx->pc = 0x17EB44u;
label_17eb44:
    // 0x17eb44: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x17eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x17eb48: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x17eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x17eb4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17eb4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17eb50: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x17eb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17eb54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17eb54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17eb58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17eb58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17eb5c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17eb5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x17eb60: 0x0  nop
    ctx->pc = 0x17eb60u;
    // NOP
    // 0x17eb64: 0x2229823  subu        $s3, $s1, $v0
    ctx->pc = 0x17eb64u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_17eb68:
    // 0x17eb68: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17eb6c: 0xac530094  sw          $s3, 0x94($v0)
    ctx->pc = 0x17eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 19));
label_17eb70:
    // 0x17eb70: 0x8fb200c0  lw          $s2, 0xC0($sp)
    ctx->pc = 0x17eb70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17eb74: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x17eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x17eb78: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17eb7c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EB7Cu;
    {
        const bool branch_taken_0x17eb7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17eb7c) {
            ctx->pc = 0x17EB8Cu;
            goto label_17eb8c;
        }
    }
    ctx->pc = 0x17EB84u;
    // 0x17eb84: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x17eb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17eb88: 0xa08000ac  sb          $zero, 0xAC($a0)
    ctx->pc = 0x17eb88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 172), (uint8_t)GPR_U32(ctx, 0));
label_17eb8c:
    // 0x17eb8c: 0x8f85bbdc  lw          $a1, -0x4424($gp)
    ctx->pc = 0x17eb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x17eb90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17eb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb94: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x17eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x17eb98: 0x24425020  addiu       $v0, $v0, 0x5020
    ctx->pc = 0x17eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20512));
    // 0x17eb9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17eb9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eba0: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x17EBA0u;
    SET_GPR_U32(ctx, 31, 0x17EBA8u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x17EBA0u, 0x17EBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EBA8u;
label_17eba8:
    // 0x17eba8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17eba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebac: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x17ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17ebb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ebb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebb4: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x17EBB4u;
    SET_GPR_U32(ctx, 31, 0x17EBBCu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x17EBB4u, 0x17EBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EBBCu;
label_17ebbc:
    // 0x17ebbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ebbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebc0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x17ebc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17ebc4: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x17ebc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x17ebc8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x17ebc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebcc: 0x24a50094  addiu       $a1, $a1, 0x94
    ctx->pc = 0x17ebccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 148));
    // 0x17ebd0: 0x278690f0  addiu       $a2, $gp, -0x6F10
    ctx->pc = 0x17ebd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938864));
    // 0x17ebd4: 0xc05f8d4  jal         func_17E350
    ctx->pc = 0x17EBD4u;
    SET_GPR_U32(ctx, 31, 0x17EBDCu);
    ctx->pc = 0x17E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E350u, 0x17EBD4u, 0x17EBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EBDCu;
label_17ebdc:
    // 0x17ebdc: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x17ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x17ebe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ebe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebe4: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x17ebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x17ebe8: 0xc1195a4  jal         func_465690
    ctx->pc = 0x17EBE8u;
    SET_GPR_U32(ctx, 31, 0x17EBF0u);
    ctx->pc = 0x465690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465690u, 0x17EBE8u, 0x17EBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EBF0u;
label_17ebf0:
    // 0x17ebf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17ebf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebf4: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x17ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x17ebf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ebf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebfc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17ebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ec00: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x17EC00u;
    SET_GPR_U32(ctx, 31, 0x17EC08u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x17EC00u, 0x17EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC08u;
label_17ec08:
    // 0x17ec08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17ec08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec0c: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x17ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17ec10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ec10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec14: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x17ec14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17ec18: 0xc059640  jal         func_165900
    ctx->pc = 0x17EC18u;
    SET_GPR_U32(ctx, 31, 0x17EC20u);
    ctx->pc = 0x165900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165900u, 0x17EC18u, 0x17EC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC20u;
label_17ec20:
    // 0x17ec20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17ec20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17ec24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec28: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x17ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17ec2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ec2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ec30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17ec34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ec38: 0xc059668  jal         func_1659A0
    ctx->pc = 0x17EC38u;
    SET_GPR_U32(ctx, 31, 0x17EC40u);
    ctx->pc = 0x1659A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659A0u, 0x17EC38u, 0x17EC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC40u;
label_17ec40:
    // 0x17ec40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17ec40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec44: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x17ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17ec48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ec48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec4c: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x17ec4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x17ec50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17ec50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec54: 0xc059698  jal         func_165A60
    ctx->pc = 0x17EC54u;
    SET_GPR_U32(ctx, 31, 0x17EC5Cu);
    ctx->pc = 0x165A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A60u, 0x17EC54u, 0x17EC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC5Cu;
label_17ec5c:
    // 0x17ec5c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x17ec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17ec60: 0x2485005c  addiu       $a1, $a0, 0x5C
    ctx->pc = 0x17ec60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x17ec64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17ec64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17ec6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17ec6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec70: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17EC70u;
    SET_GPR_U32(ctx, 31, 0x17EC78u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17EC70u, 0x17EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC78u;
label_17ec78:
    // 0x17ec78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17ec78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17ec80: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x17ec80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17ec84: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x17ec84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x17ec88: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x17ec88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17ec8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec90: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x17ec90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17ec94: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x17ec94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ec9c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x17ec9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eca0: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x17ECA0u;
    SET_GPR_U32(ctx, 31, 0x17ECA8u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x17ECA0u, 0x17ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECA8u;
label_17eca8:
    // 0x17eca8: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x17eca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x17ecac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17ecacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ecb0: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x17ECB0u;
    SET_GPR_U32(ctx, 31, 0x17ECB8u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x17ECB0u, 0x17ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECB8u;
label_17ecb8:
    // 0x17ecb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17ecb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecbc: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x17ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17ecc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ecc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecc4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17ecc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ecc8: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x17ECC8u;
    SET_GPR_U32(ctx, 31, 0x17ECD0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x17ECC8u, 0x17ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECD0u;
label_17ecd0:
    // 0x17ecd0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17ecd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ecd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17ecd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ecd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17ecd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ecdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17ecdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ece0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ece0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ece4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ece4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ece8: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x17ece8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ecec: 0x3e00008  jr          $ra
    ctx->pc = 0x17ECECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ECECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ECF4u;
    // 0x17ecf4: 0x0  nop
    ctx->pc = 0x17ecf4u;
    // NOP
    // 0x17ecf8: 0x0  nop
    ctx->pc = 0x17ecf8u;
    // NOP
    // 0x17ecfc: 0x0  nop
    ctx->pc = 0x17ecfcu;
    // NOP
    ctx->pc = 0x17ed00u;
}
