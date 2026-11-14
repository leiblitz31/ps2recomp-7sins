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

// Function: sub_002B0EA0
// Address: 0x2b0ea0 - 0x2b0f10
void sub_002B0EA0_0x2b0ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0EA0_0x2b0ea0");
#endif

    switch (ctx->pc) {
        case 0x2b0ea0u: goto label_2b0ea0;
        case 0x2b0ea4u: goto label_2b0ea4;
        case 0x2b0ea8u: goto label_2b0ea8;
        case 0x2b0eacu: goto label_2b0eac;
        case 0x2b0eb0u: goto label_2b0eb0;
        case 0x2b0eb4u: goto label_2b0eb4;
        case 0x2b0eb8u: goto label_2b0eb8;
        case 0x2b0ebcu: goto label_2b0ebc;
        case 0x2b0ec0u: goto label_2b0ec0;
        case 0x2b0ec4u: goto label_2b0ec4;
        case 0x2b0ec8u: goto label_2b0ec8;
        case 0x2b0eccu: goto label_2b0ecc;
        case 0x2b0ed0u: goto label_2b0ed0;
        case 0x2b0ed4u: goto label_2b0ed4;
        case 0x2b0ed8u: goto label_2b0ed8;
        case 0x2b0edcu: goto label_2b0edc;
        case 0x2b0ee0u: goto label_2b0ee0;
        case 0x2b0ee4u: goto label_2b0ee4;
        case 0x2b0ee8u: goto label_2b0ee8;
        case 0x2b0eecu: goto label_2b0eec;
        case 0x2b0ef0u: goto label_2b0ef0;
        case 0x2b0ef4u: goto label_2b0ef4;
        case 0x2b0ef8u: goto label_2b0ef8;
        case 0x2b0efcu: goto label_2b0efc;
        case 0x2b0f00u: goto label_2b0f00;
        case 0x2b0f04u: goto label_2b0f04;
        case 0x2b0f08u: goto label_2b0f08;
        case 0x2b0f0cu: goto label_2b0f0c;
        default: break;
    }

    ctx->pc = 0x2b0ea0u;

label_2b0ea0:
    // 0x2b0ea0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b0ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2b0ea4:
    // 0x2b0ea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b0ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b0ea8:
    // 0x2b0ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b0eac:
    // 0x2b0eac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2b0eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2b0eb0:
    // 0x2b0eb0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2b0eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2b0eb4:
    // 0x2b0eb4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2b0eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_2b0eb8:
    // 0x2b0eb8: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x2b0eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_2b0ebc:
    // 0x2b0ebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b0ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ec0:
    // 0x2b0ec0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b0ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ec4:
    // 0x2b0ec4: 0xc0ac3c4  jal         func_2B0F10
label_2b0ec8:
    if (ctx->pc == 0x2B0EC8u) {
        ctx->pc = 0x2B0ECCu;
        goto label_2b0ecc;
    }
    ctx->pc = 0x2B0EC4u;
    SET_GPR_U32(ctx, 31, 0x2B0ECCu);
    ctx->pc = 0x2B0F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0F10u, 0x2B0EC4u, 0x2B0ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0ECCu;
label_2b0ecc:
    // 0x2b0ecc: 0x3c10002b  lui         $s0, 0x2B
    ctx->pc = 0x2b0eccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)43 << 16));
label_2b0ed0:
    // 0x2b0ed0: 0x26100a40  addiu       $s0, $s0, 0xA40
    ctx->pc = 0x2b0ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2624));
label_2b0ed4:
    // 0x2b0ed4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x2b0ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2b0ed8:
    // 0x2b0ed8: 0x200f809  jalr        $s0
label_2b0edc:
    if (ctx->pc == 0x2B0EDCu) {
        ctx->pc = 0x2B0EE0u;
        goto label_2b0ee0;
    }
    ctx->pc = 0x2B0ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2B0EE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0ED8u, 0x2B0EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B0EE0u;
label_2b0ee0:
    // 0x2b0ee0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b0ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2b0ee4:
    // 0x2b0ee4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2b0ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2b0ee8:
    // 0x2b0ee8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2b0ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b0eec:
    // 0x2b0eec: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2b0eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2b0ef0:
    // 0x2b0ef0: 0xc0ab538  jal         func_2AD4E0
label_2b0ef4:
    if (ctx->pc == 0x2B0EF4u) {
        ctx->pc = 0x2B0EF8u;
        goto label_2b0ef8;
    }
    ctx->pc = 0x2B0EF0u;
    SET_GPR_U32(ctx, 31, 0x2B0EF8u);
    ctx->pc = 0x2AD4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD4E0u, 0x2B0EF0u, 0x2B0EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0EF8u;
label_2b0ef8:
    // 0x2b0ef8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b0ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b0efc:
    // 0x2b0efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b0efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b0f00:
    // 0x2b0f00: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2b0f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b0f04:
    // 0x2b0f04: 0x3e00008  jr          $ra
label_2b0f08:
    if (ctx->pc == 0x2B0F08u) {
        ctx->pc = 0x2B0F0Cu;
        goto label_2b0f0c;
    }
    ctx->pc = 0x2B0F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0F0Cu;
label_2b0f0c:
    // 0x2b0f0c: 0x0  nop
    ctx->pc = 0x2b0f0cu;
    // NOP
    ctx->pc = 0x2b0f10u;
}
