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

// Function: sub_0026F960
// Address: 0x26f960 - 0x26f9d0
void sub_0026F960_0x26f960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F960_0x26f960");
#endif

    switch (ctx->pc) {
        case 0x26f960u: goto label_26f960;
        case 0x26f964u: goto label_26f964;
        case 0x26f968u: goto label_26f968;
        case 0x26f96cu: goto label_26f96c;
        case 0x26f970u: goto label_26f970;
        case 0x26f974u: goto label_26f974;
        case 0x26f978u: goto label_26f978;
        case 0x26f97cu: goto label_26f97c;
        case 0x26f980u: goto label_26f980;
        case 0x26f984u: goto label_26f984;
        case 0x26f988u: goto label_26f988;
        case 0x26f98cu: goto label_26f98c;
        case 0x26f990u: goto label_26f990;
        case 0x26f994u: goto label_26f994;
        case 0x26f998u: goto label_26f998;
        case 0x26f99cu: goto label_26f99c;
        case 0x26f9a0u: goto label_26f9a0;
        case 0x26f9a4u: goto label_26f9a4;
        case 0x26f9a8u: goto label_26f9a8;
        case 0x26f9acu: goto label_26f9ac;
        case 0x26f9b0u: goto label_26f9b0;
        case 0x26f9b4u: goto label_26f9b4;
        case 0x26f9b8u: goto label_26f9b8;
        case 0x26f9bcu: goto label_26f9bc;
        case 0x26f9c0u: goto label_26f9c0;
        case 0x26f9c4u: goto label_26f9c4;
        case 0x26f9c8u: goto label_26f9c8;
        case 0x26f9ccu: goto label_26f9cc;
        default: break;
    }

    ctx->pc = 0x26f960u;

label_26f960:
    // 0x26f960: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26f960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_26f964:
    // 0x26f964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26f964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26f968:
    // 0x26f968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26f96c:
    // 0x26f96c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x26f96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_26f970:
    // 0x26f970: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x26f970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_26f974:
    // 0x26f974: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x26f974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_26f978:
    // 0x26f978: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x26f978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_26f97c:
    // 0x26f97c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26f97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f980:
    // 0x26f980: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26f980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f984:
    // 0x26f984: 0xc068678  jal         func_1A19E0
label_26f988:
    if (ctx->pc == 0x26F988u) {
        ctx->pc = 0x26F98Cu;
        goto label_26f98c;
    }
    ctx->pc = 0x26F984u;
    SET_GPR_U32(ctx, 31, 0x26F98Cu);
    ctx->pc = 0x1A19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19E0u, 0x26F984u, 0x26F98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F98Cu;
label_26f98c:
    // 0x26f98c: 0x3c10001a  lui         $s0, 0x1A
    ctx->pc = 0x26f98cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)26 << 16));
label_26f990:
    // 0x26f990: 0x26101380  addiu       $s0, $s0, 0x1380
    ctx->pc = 0x26f990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4992));
label_26f994:
    // 0x26f994: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x26f994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_26f998:
    // 0x26f998: 0x200f809  jalr        $s0
label_26f99c:
    if (ctx->pc == 0x26F99Cu) {
        ctx->pc = 0x26F9A0u;
        goto label_26f9a0;
    }
    ctx->pc = 0x26F998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x26F9A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F998u, 0x26F9A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F9A0u;
label_26f9a0:
    // 0x26f9a0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x26f9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_26f9a4:
    // 0x26f9a4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x26f9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_26f9a8:
    // 0x26f9a8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x26f9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_26f9ac:
    // 0x26f9ac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x26f9acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_26f9b0:
    // 0x26f9b0: 0xc09be80  jal         func_26FA00
label_26f9b4:
    if (ctx->pc == 0x26F9B4u) {
        ctx->pc = 0x26F9B8u;
        goto label_26f9b8;
    }
    ctx->pc = 0x26F9B0u;
    SET_GPR_U32(ctx, 31, 0x26F9B8u);
    ctx->pc = 0x26FA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FA00u, 0x26F9B0u, 0x26F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F9B8u;
label_26f9b8:
    // 0x26f9b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26f9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26f9bc:
    // 0x26f9bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26f9c0:
    // 0x26f9c0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x26f9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_26f9c4:
    // 0x26f9c4: 0x3e00008  jr          $ra
label_26f9c8:
    if (ctx->pc == 0x26F9C8u) {
        ctx->pc = 0x26F9CCu;
        goto label_26f9cc;
    }
    ctx->pc = 0x26F9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F9CCu;
label_26f9cc:
    // 0x26f9cc: 0x0  nop
    ctx->pc = 0x26f9ccu;
    // NOP
    ctx->pc = 0x26f9d0u;
}
