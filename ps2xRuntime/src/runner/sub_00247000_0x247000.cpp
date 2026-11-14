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

// Function: sub_00247000
// Address: 0x247000 - 0x2470b0
void sub_00247000_0x247000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247000_0x247000");
#endif

    switch (ctx->pc) {
        case 0x247024u: goto label_247024;
        case 0x247038u: goto label_247038;
        case 0x247058u: goto label_247058;
        case 0x24706cu: goto label_24706c;
        case 0x247080u: goto label_247080;
        case 0x247094u: goto label_247094;
        default: break;
    }

    ctx->pc = 0x247000u;

    // 0x247000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247008: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x247008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24700c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24700cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x247010: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247014: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x247014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x247018: 0x27859e80  addiu       $a1, $gp, -0x6180
    ctx->pc = 0x247018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942336));
    // 0x24701c: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x24701Cu;
    SET_GPR_U32(ctx, 31, 0x247024u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x24701Cu, 0x247024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247024u;
label_247024:
    // 0x247024: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247028: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x247028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x24702c: 0x27859e80  addiu       $a1, $gp, -0x6180
    ctx->pc = 0x24702cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942336));
    // 0x247030: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x247030u;
    SET_GPR_U32(ctx, 31, 0x247038u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x247030u, 0x247038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247038u;
label_247038:
    // 0x247038: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x247038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24703c: 0x10030015  beq         $zero, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x24703Cu;
    {
        const bool branch_taken_0x24703c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x24703c) {
            ctx->pc = 0x247094u;
            goto label_247094;
        }
    }
    ctx->pc = 0x247044u;
    // 0x247044: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247048: 0x24050417  addiu       $a1, $zero, 0x417
    ctx->pc = 0x247048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
    // 0x24704c: 0x27869e80  addiu       $a2, $gp, -0x6180
    ctx->pc = 0x24704cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942336));
    // 0x247050: 0xc041a50  jal         func_106940
    ctx->pc = 0x247050u;
    SET_GPR_U32(ctx, 31, 0x247058u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x247050u, 0x247058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247058u;
label_247058:
    // 0x247058: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x247058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24705c: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x24705cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x247060: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x247060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247064: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x247064u;
    SET_GPR_U32(ctx, 31, 0x24706Cu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x247064u, 0x24706Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24706Cu;
label_24706c:
    // 0x24706c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24706cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247070: 0x24050418  addiu       $a1, $zero, 0x418
    ctx->pc = 0x247070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
    // 0x247074: 0x27869e80  addiu       $a2, $gp, -0x6180
    ctx->pc = 0x247074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942336));
    // 0x247078: 0xc041a50  jal         func_106940
    ctx->pc = 0x247078u;
    SET_GPR_U32(ctx, 31, 0x247080u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x247078u, 0x247080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247080u;
label_247080:
    // 0x247080: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x247080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247084: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x247084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x247088: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x247088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24708c: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x24708Cu;
    SET_GPR_U32(ctx, 31, 0x247094u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x24708Cu, 0x247094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247094u;
label_247094:
    // 0x247094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247098: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x247098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24709c: 0x3e00008  jr          $ra
    ctx->pc = 0x24709Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24709Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2470A4u;
    // 0x2470a4: 0x0  nop
    ctx->pc = 0x2470a4u;
    // NOP
    // 0x2470a8: 0x0  nop
    ctx->pc = 0x2470a8u;
    // NOP
    // 0x2470ac: 0x0  nop
    ctx->pc = 0x2470acu;
    // NOP
    ctx->pc = 0x2470b0u;
}
