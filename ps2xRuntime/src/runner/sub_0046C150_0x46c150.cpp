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

// Function: sub_0046C150
// Address: 0x46c150 - 0x46c340
void sub_0046C150_0x46c150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C150_0x46c150");
#endif

    switch (ctx->pc) {
        case 0x46c178u: goto label_46c178;
        case 0x46c184u: goto label_46c184;
        case 0x46c190u: goto label_46c190;
        case 0x46c19cu: goto label_46c19c;
        case 0x46c1acu: goto label_46c1ac;
        case 0x46c1bcu: goto label_46c1bc;
        case 0x46c1ccu: goto label_46c1cc;
        case 0x46c1dcu: goto label_46c1dc;
        case 0x46c1f4u: goto label_46c1f4;
        case 0x46c200u: goto label_46c200;
        case 0x46c218u: goto label_46c218;
        case 0x46c23cu: goto label_46c23c;
        case 0x46c258u: goto label_46c258;
        case 0x46c268u: goto label_46c268;
        case 0x46c280u: goto label_46c280;
        case 0x46c290u: goto label_46c290;
        case 0x46c2a0u: goto label_46c2a0;
        case 0x46c2b0u: goto label_46c2b0;
        case 0x46c2c0u: goto label_46c2c0;
        case 0x46c2e0u: goto label_46c2e0;
        case 0x46c2f0u: goto label_46c2f0;
        case 0x46c300u: goto label_46c300;
        case 0x46c310u: goto label_46c310;
        case 0x46c320u: goto label_46c320;
        default: break;
    }

    ctx->pc = 0x46c150u;

    // 0x46c150: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x46c150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x46c154: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x46c154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x46c158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46c158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46c15c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46c15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46c160: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46c160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46c164: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x46c164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x46c168: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x46c168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x46c16c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x46c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x46c170: 0xc041b48  jal         func_106D20
    ctx->pc = 0x46C170u;
    SET_GPR_U32(ctx, 31, 0x46C178u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x46C170u, 0x46C178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C178u;
label_46c178:
    // 0x46c178: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x46c178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x46c17c: 0xc041b48  jal         func_106D20
    ctx->pc = 0x46C17Cu;
    SET_GPR_U32(ctx, 31, 0x46C184u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x46C17Cu, 0x46C184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C184u;
label_46c184:
    // 0x46c184: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46c184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46c188: 0xc041b48  jal         func_106D20
    ctx->pc = 0x46C188u;
    SET_GPR_U32(ctx, 31, 0x46C190u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x46C188u, 0x46C190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C190u;
label_46c190:
    // 0x46c190: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x46c190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x46c194: 0xc041b48  jal         func_106D20
    ctx->pc = 0x46C194u;
    SET_GPR_U32(ctx, 31, 0x46C19Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x46C194u, 0x46C19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C19Cu;
label_46c19c:
    // 0x46c19c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x46c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x46c1a0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x46c1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x46c1a4: 0xc119088  jal         func_464220
    ctx->pc = 0x46C1A4u;
    SET_GPR_U32(ctx, 31, 0x46C1ACu);
    ctx->pc = 0x464220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464220u, 0x46C1A4u, 0x46C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C1ACu;
label_46c1ac:
    // 0x46c1ac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x46c1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x46c1b0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x46c1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x46c1b4: 0xc1190bc  jal         func_4642F0
    ctx->pc = 0x46C1B4u;
    SET_GPR_U32(ctx, 31, 0x46C1BCu);
    ctx->pc = 0x4642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4642F0u, 0x46C1B4u, 0x46C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C1BCu;
label_46c1bc:
    // 0x46c1bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x46c1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x46c1c0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x46c1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x46c1c4: 0xc119138  jal         func_4644E0
    ctx->pc = 0x46C1C4u;
    SET_GPR_U32(ctx, 31, 0x46C1CCu);
    ctx->pc = 0x4644E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4644E0u, 0x46C1C4u, 0x46C1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C1CCu;
label_46c1cc:
    // 0x46c1cc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46c1d0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x46c1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x46c1d4: 0xc119168  jal         func_4645A0
    ctx->pc = 0x46C1D4u;
    SET_GPR_U32(ctx, 31, 0x46C1DCu);
    ctx->pc = 0x4645A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4645A0u, 0x46C1D4u, 0x46C1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C1DCu;
label_46c1dc:
    // 0x46c1dc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46c1e0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x46c1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x46c1e4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x46c1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46c1e8: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x46c1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x46c1ec: 0xc11b5cc  jal         func_46D730
    ctx->pc = 0x46C1ECu;
    SET_GPR_U32(ctx, 31, 0x46C1F4u);
    ctx->pc = 0x46D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D730u, 0x46C1ECu, 0x46C1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C1F4u;
label_46c1f4:
    // 0x46c1f4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46c1f8: 0xc11b660  jal         func_46D980
    ctx->pc = 0x46C1F8u;
    SET_GPR_U32(ctx, 31, 0x46C200u);
    ctx->pc = 0x46D980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D980u, 0x46C1F8u, 0x46C200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C200u;
label_46c200:
    // 0x46c200: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x46C200u;
    {
        const bool branch_taken_0x46c200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c200) {
            ctx->pc = 0x46C2CCu;
            goto label_46c2cc;
        }
    }
    ctx->pc = 0x46C208u;
    // 0x46c208: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x46c208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x46c20c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x46c20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x46c210: 0xc11b3d8  jal         func_46CF60
    ctx->pc = 0x46C210u;
    SET_GPR_U32(ctx, 31, 0x46C218u);
    ctx->pc = 0x46CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF60u, 0x46C210u, 0x46C218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C218u;
label_46c218:
    // 0x46c218: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46c218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c21c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x46c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46c220: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x46C220u;
    {
        const bool branch_taken_0x46c220 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x46c220) {
            ctx->pc = 0x46C244u;
            goto label_46c244;
        }
    }
    ctx->pc = 0x46C228u;
    // 0x46c228: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x46c228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x46c22c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46c230: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x46c230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46c234: 0xc11b188  jal         func_46C620
    ctx->pc = 0x46C234u;
    SET_GPR_U32(ctx, 31, 0x46C23Cu);
    ctx->pc = 0x46C620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C620u, 0x46C234u, 0x46C23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C23Cu;
label_46c23c:
    // 0x46c23c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x46C23Cu;
    {
        const bool branch_taken_0x46c23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c23c) {
            ctx->pc = 0x46C268u;
            goto label_46c268;
        }
    }
    ctx->pc = 0x46C244u;
label_46c244:
    // 0x46c244: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x46c244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x46c248: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46c248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46c24c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46c24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c250: 0xc11b170  jal         func_46C5C0
    ctx->pc = 0x46C250u;
    SET_GPR_U32(ctx, 31, 0x46C258u);
    ctx->pc = 0x46C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C5C0u, 0x46C250u, 0x46C258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C258u;
label_46c258:
    // 0x46c258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x46c258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c25c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x46c25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46c260: 0xc11b0d0  jal         func_46C340
    ctx->pc = 0x46C260u;
    SET_GPR_U32(ctx, 31, 0x46C268u);
    ctx->pc = 0x46C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C340u, 0x46C260u, 0x46C268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C268u;
label_46c268:
    // 0x46c268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46c268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46c26c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x46c26cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x46c270: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46c270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46c274: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46c274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46c278: 0xc11b5fc  jal         func_46D7F0
    ctx->pc = 0x46C278u;
    SET_GPR_U32(ctx, 31, 0x46C280u);
    ctx->pc = 0x46D7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D7F0u, 0x46C278u, 0x46C280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C280u;
label_46c280:
    // 0x46c280: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x46c280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x46c284: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46c284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46c288: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46C288u;
    SET_GPR_U32(ctx, 31, 0x46C290u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46C288u, 0x46C290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C290u;
label_46c290:
    // 0x46c290: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46c290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46c294: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46c294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46c298: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46C298u;
    SET_GPR_U32(ctx, 31, 0x46C2A0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46C298u, 0x46C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C2A0u;
label_46c2a0:
    // 0x46c2a0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x46c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x46c2a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46c2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46c2a8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46C2A8u;
    SET_GPR_U32(ctx, 31, 0x46C2B0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46C2A8u, 0x46C2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C2B0u;
label_46c2b0:
    // 0x46c2b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x46c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x46c2b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46c2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46c2b8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46C2B8u;
    SET_GPR_U32(ctx, 31, 0x46C2C0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46C2B8u, 0x46C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C2C0u;
label_46c2c0:
    // 0x46c2c0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x46c2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c2c4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x46C2C4u;
    {
        const bool branch_taken_0x46c2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c2c4) {
            ctx->pc = 0x46C324u;
            goto label_46c324;
        }
    }
    ctx->pc = 0x46C2CCu;
label_46c2cc:
    // 0x46c2cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x46c2ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c2d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46c2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46c2d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46c2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46c2d8: 0xc11b5fc  jal         func_46D7F0
    ctx->pc = 0x46C2D8u;
    SET_GPR_U32(ctx, 31, 0x46C2E0u);
    ctx->pc = 0x46D7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D7F0u, 0x46C2D8u, 0x46C2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C2E0u;
label_46c2e0:
    // 0x46c2e0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x46c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x46c2e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46c2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46c2e8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46C2E8u;
    SET_GPR_U32(ctx, 31, 0x46C2F0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46C2E8u, 0x46C2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C2F0u;
label_46c2f0:
    // 0x46c2f0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46c2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46c2f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46c2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46c2f8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46C2F8u;
    SET_GPR_U32(ctx, 31, 0x46C300u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46C2F8u, 0x46C300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C300u;
label_46c300:
    // 0x46c300: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x46c300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x46c304: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46c304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46c308: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46C308u;
    SET_GPR_U32(ctx, 31, 0x46C310u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46C308u, 0x46C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C310u;
label_46c310:
    // 0x46c310: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x46c310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x46c314: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46c314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46c318: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46C318u;
    SET_GPR_U32(ctx, 31, 0x46C320u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46C318u, 0x46C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C320u;
label_46c320:
    // 0x46c320: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46c320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46c324:
    // 0x46c324: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x46c324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46c328: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46c328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c32c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46c32cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46c330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c334: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x46c334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x46c338: 0x3e00008  jr          $ra
    ctx->pc = 0x46C338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C340u;
}
