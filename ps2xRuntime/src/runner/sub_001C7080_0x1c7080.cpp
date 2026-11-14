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

// Function: sub_001C7080
// Address: 0x1c7080 - 0x1c7160
void sub_001C7080_0x1c7080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7080_0x1c7080");
#endif

    switch (ctx->pc) {
        case 0x1c70c4u: goto label_1c70c4;
        case 0x1c70d8u: goto label_1c70d8;
        case 0x1c70e4u: goto label_1c70e4;
        case 0x1c70f4u: goto label_1c70f4;
        case 0x1c7114u: goto label_1c7114;
        case 0x1c7124u: goto label_1c7124;
        case 0x1c7138u: goto label_1c7138;
        default: break;
    }

    ctx->pc = 0x1c7080u;

    // 0x1c7080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7084: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c7084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1c7088: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c7088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c708c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1c708cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c7090: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7098u;
    // 0x1c7098: 0x0  nop
    ctx->pc = 0x1c7098u;
    // NOP
    // 0x1c709c: 0x0  nop
    ctx->pc = 0x1c709cu;
    // NOP
    // 0x1c70a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c70a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c70a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c70a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c70a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c70a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c70ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1c70acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1c70b0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1c70b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1c70b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c70b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c70b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c70b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70bc: 0xc08f740  jal         func_23DD00
    ctx->pc = 0x1C70BCu;
    SET_GPR_U32(ctx, 31, 0x1C70C4u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x1C70BCu, 0x1C70C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70C4u;
label_1c70c4:
    // 0x1c70c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c70c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c70c8: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x1c70c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1c70cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c70ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c70d0: 0xc0ac13c  jal         func_2B04F0
    ctx->pc = 0x1C70D0u;
    SET_GPR_U32(ctx, 31, 0x1C70D8u);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x1C70D0u, 0x1C70D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70D8u;
label_1c70d8:
    // 0x1c70d8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c70d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c70dc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C70DCu;
    SET_GPR_U32(ctx, 31, 0x1C70E4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C70DCu, 0x1C70E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70E4u;
label_1c70e4:
    // 0x1c70e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c70e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c70e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c70ec: 0xc08c910  jal         func_232440
    ctx->pc = 0x1C70ECu;
    SET_GPR_U32(ctx, 31, 0x1C70F4u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x1C70ECu, 0x1C70F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70F4u;
label_1c70f4:
    // 0x1c70f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c70f8: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x1c70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c70fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C70FCu;
    {
        const bool branch_taken_0x1c70fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c70fc) {
            ctx->pc = 0x1C712Cu;
            goto label_1c712c;
        }
    }
    ctx->pc = 0x1C7104u;
    // 0x1c7104: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c7104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7108: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c7108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c710c: 0xc071c58  jal         func_1C7160
    ctx->pc = 0x1C710Cu;
    SET_GPR_U32(ctx, 31, 0x1C7114u);
    ctx->pc = 0x1C7160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7160u, 0x1C710Cu, 0x1C7114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7114u;
label_1c7114:
    // 0x1c7114: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c7114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7118: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c7118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c711c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1C711Cu;
    SET_GPR_U32(ctx, 31, 0x1C7124u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1C711Cu, 0x1C7124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7124u;
label_1c7124:
    // 0x1c7124: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c7124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7128: 0xac4000d4  sw          $zero, 0xD4($v0)
    ctx->pc = 0x1c7128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
label_1c712c:
    // 0x1c712c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c712cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7130: 0xc064adc  jal         func_192B70
    ctx->pc = 0x1C7130u;
    SET_GPR_U32(ctx, 31, 0x1C7138u);
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x1C7130u, 0x1C7138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7138u;
label_1c7138:
    // 0x1c7138: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1c7138u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c713c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c713cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c7140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c7144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7148: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c7148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c714c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C714Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C714Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7154u;
    // 0x1c7154: 0x0  nop
    ctx->pc = 0x1c7154u;
    // NOP
    // 0x1c7158: 0x0  nop
    ctx->pc = 0x1c7158u;
    // NOP
    // 0x1c715c: 0x0  nop
    ctx->pc = 0x1c715cu;
    // NOP
    ctx->pc = 0x1c7160u;
}
