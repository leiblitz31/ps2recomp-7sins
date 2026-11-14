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

// Function: sub_001341B0
// Address: 0x1341b0 - 0x1342c0
void sub_001341B0_0x1341b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001341B0_0x1341b0");
#endif

    switch (ctx->pc) {
        case 0x1341f4u: goto label_1341f4;
        case 0x134218u: goto label_134218;
        case 0x134224u: goto label_134224;
        case 0x13424cu: goto label_13424c;
        case 0x134284u: goto label_134284;
        case 0x13429cu: goto label_13429c;
        default: break;
    }

    ctx->pc = 0x1341b0u;

    // 0x1341b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1341b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1341b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1341b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1341b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1341b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1341bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1341bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1341c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1341c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1341c4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1341c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1341c8: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x1341c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1341cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1341ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1341d0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1341d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1341d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1341d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1341d8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1341d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1341dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1341dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1341e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341e4: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x1341e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1341e8: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1341e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1341ec: 0xc04d0b0  jal         func_1342C0
    ctx->pc = 0x1341ECu;
    SET_GPR_U32(ctx, 31, 0x1341F4u);
    ctx->pc = 0x1342C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1342C0u, 0x1341ECu, 0x1341F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341F4u;
label_1341f4:
    // 0x1341f4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1341f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1341f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1341f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1341fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1341fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x134200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134204: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134204u;
    {
        const bool branch_taken_0x134204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x134204) {
            ctx->pc = 0x134218u;
            goto label_134218;
        }
    }
    ctx->pc = 0x13420Cu;
    // 0x13420c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13420cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134210: 0xc04d050  jal         func_134140
    ctx->pc = 0x134210u;
    SET_GPR_U32(ctx, 31, 0x134218u);
    ctx->pc = 0x134140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134140u, 0x134210u, 0x134218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134218u;
label_134218:
    // 0x134218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13421c: 0xc04ca58  jal         func_132960
    ctx->pc = 0x13421Cu;
    SET_GPR_U32(ctx, 31, 0x134224u);
    ctx->pc = 0x132960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132960u, 0x13421Cu, 0x134224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134224u;
label_134224:
    // 0x134224: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x134224u;
    {
        const bool branch_taken_0x134224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x134224) {
            ctx->pc = 0x13429Cu;
            goto label_13429c;
        }
    }
    ctx->pc = 0x13422Cu;
    // 0x13422c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x13422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x134230: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x134230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x134234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x134234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134238: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x134238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13423c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x13423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x134240: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x134240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134244: 0xc04cc18  jal         func_133060
    ctx->pc = 0x134244u;
    SET_GPR_U32(ctx, 31, 0x13424Cu);
    ctx->pc = 0x133060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133060u, 0x134244u, 0x13424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13424Cu;
label_13424c:
    // 0x13424c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13424cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134250: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x134250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134254: 0x72082b  sltu        $at, $v1, $s2
    ctx->pc = 0x134254u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x134258: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x134258u;
    {
        const bool branch_taken_0x134258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x134258) {
            ctx->pc = 0x13429Cu;
            goto label_13429c;
        }
    }
    ctx->pc = 0x134260u;
    // 0x134260: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x134260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x134264: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x134264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x134268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x134268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13426c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13426cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x134270: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x134270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x134274: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x134274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134278: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x134278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13427c: 0xc04cc00  jal         func_133000
    ctx->pc = 0x13427Cu;
    SET_GPR_U32(ctx, 31, 0x134284u);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x13427Cu, 0x134284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134284u;
label_134284:
    // 0x134284: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x134284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x134288: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x134288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x13428c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x13428cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x134290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134294: 0xc04cea4  jal         func_133A90
    ctx->pc = 0x134294u;
    SET_GPR_U32(ctx, 31, 0x13429Cu);
    ctx->pc = 0x133A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133A90u, 0x134294u, 0x13429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13429Cu;
label_13429c:
    // 0x13429c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13429cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1342a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1342a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1342a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1342a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1342a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1342a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1342ac: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1342acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1342b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1342B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1342B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1342B8u;
    // 0x1342b8: 0x0  nop
    ctx->pc = 0x1342b8u;
    // NOP
    // 0x1342bc: 0x0  nop
    ctx->pc = 0x1342bcu;
    // NOP
    ctx->pc = 0x1342c0u;
}
