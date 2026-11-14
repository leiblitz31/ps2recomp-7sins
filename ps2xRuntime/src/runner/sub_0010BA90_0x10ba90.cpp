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

// Function: sub_0010BA90
// Address: 0x10ba90 - 0x10bb90
void sub_0010BA90_0x10ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BA90_0x10ba90");
#endif

    switch (ctx->pc) {
        case 0x10baacu: goto label_10baac;
        case 0x10bae4u: goto label_10bae4;
        case 0x10bb0cu: goto label_10bb0c;
        case 0x10bb34u: goto label_10bb34;
        case 0x10bb5cu: goto label_10bb5c;
        default: break;
    }

    ctx->pc = 0x10ba90u;

    // 0x10ba90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ba94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ba98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10ba9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10baa0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10baa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10baa4: 0xc044d80  jal         func_113600
    ctx->pc = 0x10BAA4u;
    SET_GPR_U32(ctx, 31, 0x10BAACu);
    ctx->pc = 0x113600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113600u, 0x10BAA4u, 0x10BAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BAACu;
label_10baac:
    // 0x10baac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10baacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bab0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10bab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10bab4: 0x3e00008  jr          $ra
    ctx->pc = 0x10BAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BABCu;
    // 0x10babc: 0x0  nop
    ctx->pc = 0x10babcu;
    // NOP
    // 0x10bac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10bac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10bac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10bac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10bacc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10baccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10bad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bad4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10bad4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10bad8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10badc: 0xc042ef4  jal         func_10BBD0
    ctx->pc = 0x10BADCu;
    SET_GPR_U32(ctx, 31, 0x10BAE4u);
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x10BADCu, 0x10BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BAE4u;
label_10bae4:
    // 0x10bae4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10bae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10bae8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10bae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x10baec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10baecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10baf0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10baf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10baf4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10baf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10baf8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10baf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10bafc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10bafcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10bb00: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bb04: 0xc042ee4  jal         func_10BB90
    ctx->pc = 0x10BB04u;
    SET_GPR_U32(ctx, 31, 0x10BB0Cu);
    ctx->pc = 0x10BB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB90u, 0x10BB04u, 0x10BB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BB0Cu;
label_10bb0c:
    // 0x10bb0c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10bb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10bb10: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10bb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x10bb14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10bb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10bb18: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10bb18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10bb1c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10bb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10bb20: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10bb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10bb24: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10bb24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10bb28: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bb2c: 0xc042f04  jal         func_10BC10
    ctx->pc = 0x10BB2Cu;
    SET_GPR_U32(ctx, 31, 0x10BB34u);
    ctx->pc = 0x10BC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC10u, 0x10BB2Cu, 0x10BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BB34u;
label_10bb34:
    // 0x10bb34: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10bb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10bb38: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10bb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x10bb3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10bb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10bb40: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10bb40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10bb44: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10bb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10bb48: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10bb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10bb4c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10bb4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10bb50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10bb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bb54: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x10BB54u;
    SET_GPR_U32(ctx, 31, 0x10BB5Cu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x10BB54u, 0x10BB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BB5Cu;
label_10bb5c:
    // 0x10bb5c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10bb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10bb60: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10bb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x10bb64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10bb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10bb68: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10bb68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10bb6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10bb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10bb70: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10bb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10bb74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10bb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bb78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10bb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bb7c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10bb7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10bb80: 0x3e00008  jr          $ra
    ctx->pc = 0x10BB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BB88u;
    // 0x10bb88: 0x0  nop
    ctx->pc = 0x10bb88u;
    // NOP
    // 0x10bb8c: 0x0  nop
    ctx->pc = 0x10bb8cu;
    // NOP
    ctx->pc = 0x10bb90u;
}
