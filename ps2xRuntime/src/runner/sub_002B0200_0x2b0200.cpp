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

// Function: sub_002B0200
// Address: 0x2b0200 - 0x2b0310
void sub_002B0200_0x2b0200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0200_0x2b0200");
#endif

    switch (ctx->pc) {
        case 0x2b0234u: goto label_2b0234;
        case 0x2b0248u: goto label_2b0248;
        case 0x2b026cu: goto label_2b026c;
        case 0x2b0288u: goto label_2b0288;
        case 0x2b02a0u: goto label_2b02a0;
        case 0x2b02c8u: goto label_2b02c8;
        case 0x2b02d8u: goto label_2b02d8;
        case 0x2b02f4u: goto label_2b02f4;
        default: break;
    }

    ctx->pc = 0x2b0200u;

    // 0x2b0200: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b0200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b0204: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b0204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b0208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b0208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b020c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b0210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b0214: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2b0214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2b0218: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2b0218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2b021c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2b021cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2b0220: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2b0220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2b0224: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2b0224u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2b0228: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b0228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b022c: 0xc0ac114  jal         func_2B0450
    ctx->pc = 0x2B022Cu;
    SET_GPR_U32(ctx, 31, 0x2B0234u);
    ctx->pc = 0x2B0450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0450u, 0x2B022Cu, 0x2B0234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0234u;
label_2b0234:
    // 0x2b0234: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2b0234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2b0238: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2b0238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2b023c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2b023cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b0240: 0xc041954  jal         func_106550
    ctx->pc = 0x2B0240u;
    SET_GPR_U32(ctx, 31, 0x2B0248u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2B0240u, 0x2B0248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0248u;
label_2b0248:
    // 0x2b0248: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2b0248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2b024c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b024cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0250: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2b0250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b0254: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b0254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b0258: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2b0258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2b025c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b025cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b0260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0264: 0xc0ac218  jal         func_2B0860
    ctx->pc = 0x2B0264u;
    SET_GPR_U32(ctx, 31, 0x2B026Cu);
    ctx->pc = 0x2B0860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0860u, 0x2B0264u, 0x2B026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B026Cu;
label_2b026c:
    // 0x2b026c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b026cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0270: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b0270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b0274: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b0274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0278: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2b0278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b027c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b027cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0280: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2B0280u;
    SET_GPR_U32(ctx, 31, 0x2B0288u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2B0280u, 0x2B0288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0288u;
label_2b0288:
    // 0x2b0288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b0288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b028c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b028cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0290: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2b0290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b0294: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2b0294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b0298: 0xc0ac0f8  jal         func_2B03E0
    ctx->pc = 0x2B0298u;
    SET_GPR_U32(ctx, 31, 0x2B02A0u);
    ctx->pc = 0x2B03E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B03E0u, 0x2B0298u, 0x2B02A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02A0u;
label_2b02a0:
    // 0x2b02a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b02a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b02a4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2b02a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b02a8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B02A8u;
    {
        const bool branch_taken_0x2b02a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b02a8) {
            ctx->pc = 0x2B02CCu;
            goto label_2b02cc;
        }
    }
    ctx->pc = 0x2B02B0u;
    // 0x2b02b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b02b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b02b4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2b02b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b02b8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2b02b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b02bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b02bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b02c0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2B02C0u;
    SET_GPR_U32(ctx, 31, 0x2B02C8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2B02C0u, 0x2B02C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02C8u;
label_2b02c8:
    // 0x2b02c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b02c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b02cc:
    // 0x2b02cc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b02ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b02d0: 0xc0ac0d8  jal         func_2B0360
    ctx->pc = 0x2B02D0u;
    SET_GPR_U32(ctx, 31, 0x2B02D8u);
    ctx->pc = 0x2B0360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0360u, 0x2B02D0u, 0x2B02D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02D8u;
label_2b02d8:
    // 0x2b02d8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2b02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2b02dc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2b02dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b02e0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b02e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b02e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b02e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b02e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b02e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b02ec: 0xc0ac0c4  jal         func_2B0310
    ctx->pc = 0x2B02ECu;
    SET_GPR_U32(ctx, 31, 0x2B02F4u);
    ctx->pc = 0x2B0310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0310u, 0x2B02ECu, 0x2B02F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02F4u;
label_2b02f4:
    // 0x2b02f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b02f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b02f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b02f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b02fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b02fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0300: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b0300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0304: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2b0304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2b0308: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0310u;
}
