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

// Function: sub_0025B1D0
// Address: 0x25b1d0 - 0x25b2e0
void sub_0025B1D0_0x25b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B1D0_0x25b1d0");
#endif

    switch (ctx->pc) {
        case 0x25b204u: goto label_25b204;
        case 0x25b218u: goto label_25b218;
        case 0x25b23cu: goto label_25b23c;
        case 0x25b258u: goto label_25b258;
        case 0x25b270u: goto label_25b270;
        case 0x25b298u: goto label_25b298;
        case 0x25b2a8u: goto label_25b2a8;
        case 0x25b2c4u: goto label_25b2c4;
        default: break;
    }

    ctx->pc = 0x25b1d0u;

    // 0x25b1d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25b1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25b1d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25b1d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25b1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25b1dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b1e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b1e4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x25b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x25b1e8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x25b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x25b1ec: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x25b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x25b1f0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x25b1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x25b1f4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x25b1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x25b1f8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25b1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b1fc: 0xc0966e4  jal         func_259B90
    ctx->pc = 0x25B1FCu;
    SET_GPR_U32(ctx, 31, 0x25B204u);
    ctx->pc = 0x259B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259B90u, 0x25B1FCu, 0x25B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B204u;
label_25b204:
    // 0x25b204: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x25b204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x25b208: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x25b208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x25b20c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25b20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25b210: 0xc041954  jal         func_106550
    ctx->pc = 0x25B210u;
    SET_GPR_U32(ctx, 31, 0x25B218u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x25B210u, 0x25B218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B218u;
label_25b218:
    // 0x25b218: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x25b218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x25b21c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b220: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25b220u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25b224: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25b224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b228: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x25b228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25b22c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25b22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25b230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b234: 0xc097144  jal         func_25C510
    ctx->pc = 0x25B234u;
    SET_GPR_U32(ctx, 31, 0x25B23Cu);
    ctx->pc = 0x25C510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C510u, 0x25B234u, 0x25B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B23Cu;
label_25b23c:
    // 0x25b23c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25b23cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b240: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25b240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b244: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25b244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b248: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x25b248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25b24c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25b24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b250: 0xc041934  jal         func_1064D0
    ctx->pc = 0x25B250u;
    SET_GPR_U32(ctx, 31, 0x25B258u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x25B250u, 0x25B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B258u;
label_25b258:
    // 0x25b258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25b258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b25c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b260: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x25b260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25b264: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x25b264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25b268: 0xc096cec  jal         func_25B3B0
    ctx->pc = 0x25B268u;
    SET_GPR_U32(ctx, 31, 0x25B270u);
    ctx->pc = 0x25B3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B3B0u, 0x25B268u, 0x25B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B270u;
label_25b270:
    // 0x25b270: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25b270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b274: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x25b274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b278: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25B278u;
    {
        const bool branch_taken_0x25b278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b278) {
            ctx->pc = 0x25B29Cu;
            goto label_25b29c;
        }
    }
    ctx->pc = 0x25B280u;
    // 0x25b280: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25b280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b284: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x25b284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25b288: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25b288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25b28c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25b28cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b290: 0xc041934  jal         func_1064D0
    ctx->pc = 0x25B290u;
    SET_GPR_U32(ctx, 31, 0x25B298u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x25B290u, 0x25B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B298u;
label_25b298:
    // 0x25b298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25b298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b29c:
    // 0x25b29c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25b29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b2a0: 0xc096ccc  jal         func_25B330
    ctx->pc = 0x25B2A0u;
    SET_GPR_U32(ctx, 31, 0x25B2A8u);
    ctx->pc = 0x25B330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B330u, 0x25B2A0u, 0x25B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B2A8u;
label_25b2a8:
    // 0x25b2a8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25b2ac: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x25b2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25b2b0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b2b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25b2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b2b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25b2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b2bc: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x25B2BCu;
    SET_GPR_U32(ctx, 31, 0x25B2C4u);
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x25B2BCu, 0x25B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B2C4u;
label_25b2c4:
    // 0x25b2c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25b2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b2c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25b2c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b2cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b2ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b2d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b2d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x25b2d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25b2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x25B2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B2E0u;
}
