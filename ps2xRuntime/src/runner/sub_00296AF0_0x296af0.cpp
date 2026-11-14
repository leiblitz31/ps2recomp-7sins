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

// Function: sub_00296AF0
// Address: 0x296af0 - 0x296b70
void sub_00296AF0_0x296af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296AF0_0x296af0");
#endif

    switch (ctx->pc) {
        case 0x296b10u: goto label_296b10;
        case 0x296b1cu: goto label_296b1c;
        case 0x296b30u: goto label_296b30;
        case 0x296b3cu: goto label_296b3c;
        case 0x296b50u: goto label_296b50;
        default: break;
    }

    ctx->pc = 0x296af0u;

    // 0x296af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x296af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x296af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x296af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x296afc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x296afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x296b00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x296b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296b04: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x296b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x296b08: 0xc0a58e0  jal         func_296380
    ctx->pc = 0x296B08u;
    SET_GPR_U32(ctx, 31, 0x296B10u);
    ctx->pc = 0x296380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296380u, 0x296B08u, 0x296B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B10u;
label_296b10:
    // 0x296b10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x296b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296b14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x296B14u;
    {
        const bool branch_taken_0x296b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296b14) {
            ctx->pc = 0x296B40u;
            goto label_296b40;
        }
    }
    ctx->pc = 0x296B1Cu;
label_296b1c:
    // 0x296b1c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x296b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x296b20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x296b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296b24: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x296b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x296b28: 0xc0e1500  jal         func_385400
    ctx->pc = 0x296B28u;
    SET_GPR_U32(ctx, 31, 0x296B30u);
    ctx->pc = 0x385400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385400u, 0x296B28u, 0x296B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B30u;
label_296b30:
    // 0x296b30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x296b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296b34: 0xc0e12c2  jal         func_384B08
    ctx->pc = 0x296B34u;
    SET_GPR_U32(ctx, 31, 0x296B3Cu);
    ctx->pc = 0x384B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384B08u, 0x296B34u, 0x296B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B3Cu;
label_296b3c:
    // 0x296b3c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x296b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_296b40:
    // 0x296b40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x296b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296b44: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x296b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x296b48: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x296B48u;
    SET_GPR_U32(ctx, 31, 0x296B50u);
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x296B48u, 0x296B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B50u;
label_296b50:
    // 0x296b50: 0x1602fff2  bne         $s0, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x296B50u;
    {
        const bool branch_taken_0x296b50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x296b50) {
            ctx->pc = 0x296B1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296b1c;
        }
    }
    ctx->pc = 0x296B58u;
    // 0x296b58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x296b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296b5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296b60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x296b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x296b64: 0x3e00008  jr          $ra
    ctx->pc = 0x296B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296B6Cu;
    // 0x296b6c: 0x0  nop
    ctx->pc = 0x296b6cu;
    // NOP
    ctx->pc = 0x296b70u;
}
