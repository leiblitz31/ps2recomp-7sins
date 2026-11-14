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

// Function: sub_00484ED0
// Address: 0x484ed0 - 0x484f60
void sub_00484ED0_0x484ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484ED0_0x484ed0");
#endif

    switch (ctx->pc) {
        case 0x484efcu: goto label_484efc;
        case 0x484f0cu: goto label_484f0c;
        case 0x484f30u: goto label_484f30;
        case 0x484f40u: goto label_484f40;
        default: break;
    }

    ctx->pc = 0x484ed0u;

    // 0x484ed0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x484ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x484ed4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x484ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x484ed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x484ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x484edc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x484edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x484ee0: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x484ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x484ee4: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x484ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x484ee8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x484ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x484eec: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x484eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x484ef0: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x484ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x484ef4: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x484EF4u;
    SET_GPR_U32(ctx, 31, 0x484EFCu);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x484EF4u, 0x484EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484EFCu;
label_484efc:
    // 0x484efc: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x484efcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x484f00: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x484f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x484f04: 0xc0bc65a  jal         func_2F1968
    ctx->pc = 0x484F04u;
    SET_GPR_U32(ctx, 31, 0x484F0Cu);
    ctx->pc = 0x2F1968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1968u, 0x484F04u, 0x484F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484F0Cu;
label_484f0c:
    // 0x484f0c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x484f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x484f10: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x484f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x484f14: 0x27b0005c  addiu       $s0, $sp, 0x5C
    ctx->pc = 0x484f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x484f18: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x484f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x484f1c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x484f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x484f20: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x484f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x484f24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x484f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484f28: 0xc12134c  jal         func_484D30
    ctx->pc = 0x484F28u;
    SET_GPR_U32(ctx, 31, 0x484F30u);
    ctx->pc = 0x484D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484D30u, 0x484F28u, 0x484F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484F30u;
label_484f30:
    // 0x484f30: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x484f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x484f34: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x484f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x484f38: 0xc0a030c  jal         func_280C30
    ctx->pc = 0x484F38u;
    SET_GPR_U32(ctx, 31, 0x484F40u);
    ctx->pc = 0x280C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280C30u, 0x484F38u, 0x484F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484F40u;
label_484f40:
    // 0x484f40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x484f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x484f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x484f48: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x484f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x484f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x484F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484F54u;
    // 0x484f54: 0x0  nop
    ctx->pc = 0x484f54u;
    // NOP
    // 0x484f58: 0x0  nop
    ctx->pc = 0x484f58u;
    // NOP
    // 0x484f5c: 0x0  nop
    ctx->pc = 0x484f5cu;
    // NOP
    ctx->pc = 0x484f60u;
}
