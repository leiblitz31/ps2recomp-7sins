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

// Function: sub_001E1960
// Address: 0x1e1960 - 0x1e1a20
void sub_001E1960_0x1e1960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1960_0x1e1960");
#endif

    switch (ctx->pc) {
        case 0x1e1988u: goto label_1e1988;
        case 0x1e19a0u: goto label_1e19a0;
        case 0x1e19b8u: goto label_1e19b8;
        case 0x1e19ccu: goto label_1e19cc;
        case 0x1e19e0u: goto label_1e19e0;
        case 0x1e19f0u: goto label_1e19f0;
        case 0x1e1a0cu: goto label_1e1a0c;
        default: break;
    }

    ctx->pc = 0x1e1960u;

    // 0x1e1960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e1960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e1964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e196c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e196cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e1970: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e1970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e1974: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e1974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e1978: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1e1978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e197c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e197cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1980: 0xc078618  jal         func_1E1860
    ctx->pc = 0x1E1980u;
    SET_GPR_U32(ctx, 31, 0x1E1988u);
    ctx->pc = 0x1E1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1860u, 0x1E1980u, 0x1E1988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1988u;
label_1e1988:
    // 0x1e1988: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1e1988u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e198c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E198Cu;
    {
        const bool branch_taken_0x1e198c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e198c) {
            ctx->pc = 0x1E19D4u;
            goto label_1e19d4;
        }
    }
    ctx->pc = 0x1E1994u;
    // 0x1e1994: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e1994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1998: 0xc078638  jal         func_1E18E0
    ctx->pc = 0x1E1998u;
    SET_GPR_U32(ctx, 31, 0x1E19A0u);
    ctx->pc = 0x1E18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E18E0u, 0x1E1998u, 0x1E19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19A0u;
label_1e19a0:
    // 0x1e19a0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e19a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e19a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e19a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e19a8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1e19a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e19ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e19acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e19b0: 0xc0786e8  jal         func_1E1BA0
    ctx->pc = 0x1E19B0u;
    SET_GPR_U32(ctx, 31, 0x1E19B8u);
    ctx->pc = 0x1E1BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1BA0u, 0x1E19B0u, 0x1E19B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19B8u;
label_1e19b8:
    // 0x1e19b8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e19b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e19bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e19bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e19c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19c4: 0xc078698  jal         func_1E1A60
    ctx->pc = 0x1E19C4u;
    SET_GPR_U32(ctx, 31, 0x1E19CCu);
    ctx->pc = 0x1E1A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A60u, 0x1E19C4u, 0x1E19CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19CCu;
label_1e19cc:
    // 0x1e19cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E19CCu;
    {
        const bool branch_taken_0x1e19cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e19cc) {
            ctx->pc = 0x1E1A0Cu;
            goto label_1e1a0c;
        }
    }
    ctx->pc = 0x1E19D4u;
label_1e19d4:
    // 0x1e19d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e19d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e19d8: 0xc0786e8  jal         func_1E1BA0
    ctx->pc = 0x1E19D8u;
    SET_GPR_U32(ctx, 31, 0x1E19E0u);
    ctx->pc = 0x1E1BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1BA0u, 0x1E19D8u, 0x1E19E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19E0u;
label_1e19e0:
    // 0x1e19e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e19e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e19e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e19e8: 0xc078618  jal         func_1E1860
    ctx->pc = 0x1E19E8u;
    SET_GPR_U32(ctx, 31, 0x1E19F0u);
    ctx->pc = 0x1E1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1860u, 0x1E19E8u, 0x1E19F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19F0u;
label_1e19f0:
    // 0x1e19f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e19f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e19f4: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1e19f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e19f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e19f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e19fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e19fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1a00: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1e1a00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1a04: 0xc078688  jal         func_1E1A20
    ctx->pc = 0x1E1A04u;
    SET_GPR_U32(ctx, 31, 0x1E1A0Cu);
    ctx->pc = 0x1E1A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A20u, 0x1E1A04u, 0x1E1A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1A0Cu;
label_1e1a0c:
    // 0x1e1a0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1a10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1a14: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e1a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e1a18: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1A20u;
}
