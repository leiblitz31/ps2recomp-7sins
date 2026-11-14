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

// Function: sub_00245C60
// Address: 0x245c60 - 0x245d70
void sub_00245C60_0x245c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245C60_0x245c60");
#endif

    switch (ctx->pc) {
        case 0x245c94u: goto label_245c94;
        case 0x245ca8u: goto label_245ca8;
        case 0x245cccu: goto label_245ccc;
        case 0x245ce8u: goto label_245ce8;
        case 0x245d00u: goto label_245d00;
        case 0x245d28u: goto label_245d28;
        case 0x245d38u: goto label_245d38;
        case 0x245d54u: goto label_245d54;
        default: break;
    }

    ctx->pc = 0x245c60u;

    // 0x245c60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x245c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x245c64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x245c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x245c68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x245c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x245c6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x245c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x245c70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x245c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x245c74: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x245c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x245c78: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x245c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x245c7c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x245c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x245c80: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x245c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x245c84: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x245c84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x245c88: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x245c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x245c8c: 0xc0917ac  jal         func_245EB0
    ctx->pc = 0x245C8Cu;
    SET_GPR_U32(ctx, 31, 0x245C94u);
    ctx->pc = 0x245EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245EB0u, 0x245C8Cu, 0x245C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C94u;
label_245c94:
    // 0x245c94: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x245c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x245c98: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x245c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x245c9c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x245c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x245ca0: 0xc041954  jal         func_106550
    ctx->pc = 0x245CA0u;
    SET_GPR_U32(ctx, 31, 0x245CA8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x245CA0u, 0x245CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CA8u;
label_245ca8:
    // 0x245ca8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x245ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x245cac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x245cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x245cb0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x245cb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245cb4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x245cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x245cb8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x245cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x245cbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x245cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245cc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x245cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245cc4: 0xc091840  jal         func_246100
    ctx->pc = 0x245CC4u;
    SET_GPR_U32(ctx, 31, 0x245CCCu);
    ctx->pc = 0x246100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246100u, 0x245CC4u, 0x245CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CCCu;
label_245ccc:
    // 0x245ccc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x245cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245cd0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x245cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x245cd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x245cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x245cd8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x245cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x245cdc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x245cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245ce0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x245CE0u;
    SET_GPR_U32(ctx, 31, 0x245CE8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x245CE0u, 0x245CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CE8u;
label_245ce8:
    // 0x245ce8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x245ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245cf0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x245cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x245cf4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x245cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x245cf8: 0xc091790  jal         func_245E40
    ctx->pc = 0x245CF8u;
    SET_GPR_U32(ctx, 31, 0x245D00u);
    ctx->pc = 0x245E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245E40u, 0x245CF8u, 0x245D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D00u;
label_245d00:
    // 0x245d00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x245d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d04: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x245d04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x245d08: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x245D08u;
    {
        const bool branch_taken_0x245d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245d08) {
            ctx->pc = 0x245D2Cu;
            goto label_245d2c;
        }
    }
    ctx->pc = 0x245D10u;
    // 0x245d10: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x245d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x245d14: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x245d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x245d18: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x245d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x245d1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x245d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d20: 0xc041934  jal         func_1064D0
    ctx->pc = 0x245D20u;
    SET_GPR_U32(ctx, 31, 0x245D28u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x245D20u, 0x245D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D28u;
label_245d28:
    // 0x245d28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x245d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245d2c:
    // 0x245d2c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x245d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x245d30: 0xc091770  jal         func_245DC0
    ctx->pc = 0x245D30u;
    SET_GPR_U32(ctx, 31, 0x245D38u);
    ctx->pc = 0x245DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245DC0u, 0x245D30u, 0x245D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D38u;
label_245d38:
    // 0x245d38: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x245d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x245d3c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x245d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x245d40: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x245d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x245d44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x245d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x245d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d4c: 0xc09175c  jal         func_245D70
    ctx->pc = 0x245D4Cu;
    SET_GPR_U32(ctx, 31, 0x245D54u);
    ctx->pc = 0x245D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245D70u, 0x245D4Cu, 0x245D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D54u;
label_245d54:
    // 0x245d54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x245d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245d58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x245d58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245d5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x245d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245d60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x245d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245d64: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x245d64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x245d68: 0x3e00008  jr          $ra
    ctx->pc = 0x245D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245D70u;
}
