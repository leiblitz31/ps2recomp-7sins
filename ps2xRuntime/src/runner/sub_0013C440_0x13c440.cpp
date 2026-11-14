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

// Function: sub_0013C440
// Address: 0x13c440 - 0x13c550
void sub_0013C440_0x13c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C440_0x13c440");
#endif

    switch (ctx->pc) {
        case 0x13c474u: goto label_13c474;
        case 0x13c488u: goto label_13c488;
        case 0x13c4acu: goto label_13c4ac;
        case 0x13c4c8u: goto label_13c4c8;
        case 0x13c4e0u: goto label_13c4e0;
        case 0x13c508u: goto label_13c508;
        case 0x13c518u: goto label_13c518;
        case 0x13c534u: goto label_13c534;
        default: break;
    }

    ctx->pc = 0x13c440u;

    // 0x13c440: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13c440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x13c444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13c444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13c448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13c448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13c44c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c450: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c454: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x13c454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x13c458: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x13c458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x13c45c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x13c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x13c460: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x13c460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x13c464: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x13c464u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x13c468: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x13c468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c46c: 0xc04e50c  jal         func_139430
    ctx->pc = 0x13C46Cu;
    SET_GPR_U32(ctx, 31, 0x13C474u);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x13C46Cu, 0x13C474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C474u;
label_13c474:
    // 0x13c474: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x13c474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x13c478: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x13c478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x13c47c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x13c47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13c480: 0xc041954  jal         func_106550
    ctx->pc = 0x13C480u;
    SET_GPR_U32(ctx, 31, 0x13C488u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x13C480u, 0x13C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C488u;
label_13c488:
    // 0x13c488: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x13c488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x13c48c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c490: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x13c490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c494: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c498: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x13c498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13c49c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13c49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13c4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4a4: 0xc04f43c  jal         func_13D0F0
    ctx->pc = 0x13C4A4u;
    SET_GPR_U32(ctx, 31, 0x13C4ACu);
    ctx->pc = 0x13D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D0F0u, 0x13C4A4u, 0x13C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4ACu;
label_13c4ac:
    // 0x13c4ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13c4acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c4b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13c4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c4b8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x13c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c4bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13c4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4c0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x13C4C0u;
    SET_GPR_U32(ctx, 31, 0x13C4C8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x13C4C0u, 0x13C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4C8u;
label_13c4c8:
    // 0x13c4c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4d0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x13c4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13c4d4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x13c4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c4d8: 0xc04f188  jal         func_13C620
    ctx->pc = 0x13C4D8u;
    SET_GPR_U32(ctx, 31, 0x13C4E0u);
    ctx->pc = 0x13C620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C620u, 0x13C4D8u, 0x13C4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4E0u;
label_13c4e0:
    // 0x13c4e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c4e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4e4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x13c4e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13c4e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C4E8u;
    {
        const bool branch_taken_0x13c4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c4e8) {
            ctx->pc = 0x13C50Cu;
            goto label_13c50c;
        }
    }
    ctx->pc = 0x13C4F0u;
    // 0x13c4f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c4f4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x13c4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c4f8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x13c4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13c4fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13c4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c500: 0xc041934  jal         func_1064D0
    ctx->pc = 0x13C500u;
    SET_GPR_U32(ctx, 31, 0x13C508u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x13C500u, 0x13C508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C508u;
label_13c508:
    // 0x13c508: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c50c:
    // 0x13c50c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x13c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c510: 0xc04f168  jal         func_13C5A0
    ctx->pc = 0x13C510u;
    SET_GPR_U32(ctx, 31, 0x13C518u);
    ctx->pc = 0x13C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C5A0u, 0x13C510u, 0x13C518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C518u;
label_13c518:
    // 0x13c518: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13c518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13c51c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x13c51cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13c520: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x13c520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c524: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13c524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c528: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13c528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c52c: 0xc04f154  jal         func_13C550
    ctx->pc = 0x13C52Cu;
    SET_GPR_U32(ctx, 31, 0x13C534u);
    ctx->pc = 0x13C550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C550u, 0x13C52Cu, 0x13C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C534u;
label_13c534:
    // 0x13c534: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13c534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c538: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13c538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c53c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c53cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c544: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x13c544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13c548: 0x3e00008  jr          $ra
    ctx->pc = 0x13C548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C550u;
}
