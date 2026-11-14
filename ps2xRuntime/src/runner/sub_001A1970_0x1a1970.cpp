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

// Function: sub_001A1970
// Address: 0x1a1970 - 0x1a19e0
void sub_001A1970_0x1a1970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1970_0x1a1970");
#endif

    switch (ctx->pc) {
        case 0x1a1970u: goto label_1a1970;
        case 0x1a1974u: goto label_1a1974;
        case 0x1a1978u: goto label_1a1978;
        case 0x1a197cu: goto label_1a197c;
        case 0x1a1980u: goto label_1a1980;
        case 0x1a1984u: goto label_1a1984;
        case 0x1a1988u: goto label_1a1988;
        case 0x1a198cu: goto label_1a198c;
        case 0x1a1990u: goto label_1a1990;
        case 0x1a1994u: goto label_1a1994;
        case 0x1a1998u: goto label_1a1998;
        case 0x1a199cu: goto label_1a199c;
        case 0x1a19a0u: goto label_1a19a0;
        case 0x1a19a4u: goto label_1a19a4;
        case 0x1a19a8u: goto label_1a19a8;
        case 0x1a19acu: goto label_1a19ac;
        case 0x1a19b0u: goto label_1a19b0;
        case 0x1a19b4u: goto label_1a19b4;
        case 0x1a19b8u: goto label_1a19b8;
        case 0x1a19bcu: goto label_1a19bc;
        case 0x1a19c0u: goto label_1a19c0;
        case 0x1a19c4u: goto label_1a19c4;
        case 0x1a19c8u: goto label_1a19c8;
        case 0x1a19ccu: goto label_1a19cc;
        case 0x1a19d0u: goto label_1a19d0;
        case 0x1a19d4u: goto label_1a19d4;
        case 0x1a19d8u: goto label_1a19d8;
        case 0x1a19dcu: goto label_1a19dc;
        default: break;
    }

    ctx->pc = 0x1a1970u;

label_1a1970:
    // 0x1a1970: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a1970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a1974:
    // 0x1a1974: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a1978:
    // 0x1a1978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a197c:
    // 0x1a197c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1a197cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1a1980:
    // 0x1a1980: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1a1980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1a1984:
    // 0x1a1984: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1a1984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_1a1988:
    // 0x1a1988: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1a1988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_1a198c:
    // 0x1a198c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a198cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1990:
    // 0x1a1990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1994:
    // 0x1a1994: 0xc068678  jal         func_1A19E0
label_1a1998:
    if (ctx->pc == 0x1A1998u) {
        ctx->pc = 0x1A199Cu;
        goto label_1a199c;
    }
    ctx->pc = 0x1A1994u;
    SET_GPR_U32(ctx, 31, 0x1A199Cu);
    ctx->pc = 0x1A19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19E0u, 0x1A1994u, 0x1A199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A199Cu;
label_1a199c:
    // 0x1a199c: 0x3c10001a  lui         $s0, 0x1A
    ctx->pc = 0x1a199cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)26 << 16));
label_1a19a0:
    // 0x1a19a0: 0x26101380  addiu       $s0, $s0, 0x1380
    ctx->pc = 0x1a19a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4992));
label_1a19a4:
    // 0x1a19a4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1a19a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1a19a8:
    // 0x1a19a8: 0x200f809  jalr        $s0
label_1a19ac:
    if (ctx->pc == 0x1A19ACu) {
        ctx->pc = 0x1A19B0u;
        goto label_1a19b0;
    }
    ctx->pc = 0x1A19A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1A19B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A19A8u, 0x1A19B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A19B0u;
label_1a19b0:
    // 0x1a19b0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1a19b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a19b4:
    // 0x1a19b4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1a19b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a19b8:
    // 0x1a19b8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x1a19b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1a19bc:
    // 0x1a19bc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1a19bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1a19c0:
    // 0x1a19c0: 0xc0683c8  jal         func_1A0F20
label_1a19c4:
    if (ctx->pc == 0x1A19C4u) {
        ctx->pc = 0x1A19C8u;
        goto label_1a19c8;
    }
    ctx->pc = 0x1A19C0u;
    SET_GPR_U32(ctx, 31, 0x1A19C8u);
    ctx->pc = 0x1A0F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F20u, 0x1A19C0u, 0x1A19C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A19C8u;
label_1a19c8:
    // 0x1a19c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a19c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a19cc:
    // 0x1a19cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a19ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a19d0:
    // 0x1a19d0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1a19d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1a19d4:
    // 0x1a19d4: 0x3e00008  jr          $ra
label_1a19d8:
    if (ctx->pc == 0x1A19D8u) {
        ctx->pc = 0x1A19DCu;
        goto label_1a19dc;
    }
    ctx->pc = 0x1A19D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A19D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A19DCu;
label_1a19dc:
    // 0x1a19dc: 0x0  nop
    ctx->pc = 0x1a19dcu;
    // NOP
    ctx->pc = 0x1a19e0u;
}
