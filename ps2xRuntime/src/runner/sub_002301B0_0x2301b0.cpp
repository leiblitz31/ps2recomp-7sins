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

// Function: sub_002301B0
// Address: 0x2301b0 - 0x2302c0
void sub_002301B0_0x2301b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002301B0_0x2301b0");
#endif

    switch (ctx->pc) {
        case 0x2301e4u: goto label_2301e4;
        case 0x2301f8u: goto label_2301f8;
        case 0x23021cu: goto label_23021c;
        case 0x230238u: goto label_230238;
        case 0x230250u: goto label_230250;
        case 0x230278u: goto label_230278;
        case 0x230288u: goto label_230288;
        case 0x2302a4u: goto label_2302a4;
        default: break;
    }

    ctx->pc = 0x2301b0u;

    // 0x2301b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2301b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2301b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2301b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2301b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2301b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2301bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2301bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2301c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2301c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2301c4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2301c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2301c8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2301c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2301cc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2301ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2301d0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2301d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2301d4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2301d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2301d8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2301d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2301dc: 0xc08c100  jal         func_230400
    ctx->pc = 0x2301DCu;
    SET_GPR_U32(ctx, 31, 0x2301E4u);
    ctx->pc = 0x230400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230400u, 0x2301DCu, 0x2301E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2301E4u;
label_2301e4:
    // 0x2301e4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2301e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2301e8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2301e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2301ec: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2301ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2301f0: 0xc041954  jal         func_106550
    ctx->pc = 0x2301F0u;
    SET_GPR_U32(ctx, 31, 0x2301F8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2301F0u, 0x2301F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2301F8u;
label_2301f8:
    // 0x2301f8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2301f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2301fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2301fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230200: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x230200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230204: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x230204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x230208: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x230208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x23020c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23020cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230210: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x230210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230214: 0xc08c9d0  jal         func_232740
    ctx->pc = 0x230214u;
    SET_GPR_U32(ctx, 31, 0x23021Cu);
    ctx->pc = 0x232740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232740u, 0x230214u, 0x23021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23021Cu;
label_23021c:
    // 0x23021c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23021cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230220: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x230220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x230224: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x230224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230228: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x230228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23022c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23022cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230230: 0xc041934  jal         func_1064D0
    ctx->pc = 0x230230u;
    SET_GPR_U32(ctx, 31, 0x230238u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x230230u, 0x230238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230238u;
label_230238:
    // 0x230238: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23023c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23023cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230240: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x230240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x230244: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x230244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x230248: 0xc08c0e4  jal         func_230390
    ctx->pc = 0x230248u;
    SET_GPR_U32(ctx, 31, 0x230250u);
    ctx->pc = 0x230390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230390u, 0x230248u, 0x230250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230250u;
label_230250:
    // 0x230250: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230254: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x230254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x230258: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x230258u;
    {
        const bool branch_taken_0x230258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230258) {
            ctx->pc = 0x23027Cu;
            goto label_23027c;
        }
    }
    ctx->pc = 0x230260u;
    // 0x230260: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x230260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x230264: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x230264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x230268: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x230268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23026c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23026cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230270: 0xc041934  jal         func_1064D0
    ctx->pc = 0x230270u;
    SET_GPR_U32(ctx, 31, 0x230278u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x230270u, 0x230278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230278u;
label_230278:
    // 0x230278: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23027c:
    // 0x23027c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x23027cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x230280: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x230280u;
    SET_GPR_U32(ctx, 31, 0x230288u);
    ctx->pc = 0x230310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230310u, 0x230280u, 0x230288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230288u;
label_230288:
    // 0x230288: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x230288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x23028c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x23028cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x230290: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x230290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x230294: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230298: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x230298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23029c: 0xc08c0b0  jal         func_2302C0
    ctx->pc = 0x23029Cu;
    SET_GPR_U32(ctx, 31, 0x2302A4u);
    ctx->pc = 0x2302C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2302C0u, 0x23029Cu, 0x2302A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2302A4u;
label_2302a4:
    // 0x2302a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2302a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2302a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2302a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2302ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2302acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2302b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2302b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2302b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2302b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2302b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2302B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2302B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2302C0u;
}
