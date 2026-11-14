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

// Function: sub_0025F8A0
// Address: 0x25f8a0 - 0x25f9c0
void sub_0025F8A0_0x25f8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F8A0_0x25f8a0");
#endif

    switch (ctx->pc) {
        case 0x25f8c0u: goto label_25f8c0;
        case 0x25f8e0u: goto label_25f8e0;
        case 0x25f8f8u: goto label_25f8f8;
        case 0x25f908u: goto label_25f908;
        case 0x25f918u: goto label_25f918;
        case 0x25f928u: goto label_25f928;
        case 0x25f940u: goto label_25f940;
        case 0x25f954u: goto label_25f954;
        case 0x25f960u: goto label_25f960;
        case 0x25f974u: goto label_25f974;
        case 0x25f984u: goto label_25f984;
        default: break;
    }

    ctx->pc = 0x25f8a0u;

    // 0x25f8a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25f8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25f8a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25f8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25f8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25f8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25f8ac: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x25f8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x25f8b0: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x25f8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x25f8b4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f8b8: 0xc078bc0  jal         func_1E2F00
    ctx->pc = 0x25F8B8u;
    SET_GPR_U32(ctx, 31, 0x25F8C0u);
    ctx->pc = 0x1E2F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2F00u, 0x25F8B8u, 0x25F8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8C0u;
label_25f8c0:
    // 0x25f8c0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x25f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f8c4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x25f8c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25f8c8: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x25F8C8u;
    {
        const bool branch_taken_0x25f8c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f8c8) {
            ctx->pc = 0x25F9A4u;
            goto label_25f9a4;
        }
    }
    ctx->pc = 0x25F8D0u;
    // 0x25f8d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f8d4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x25f8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f8d8: 0xc078b28  jal         func_1E2CA0
    ctx->pc = 0x25F8D8u;
    SET_GPR_U32(ctx, 31, 0x25F8E0u);
    ctx->pc = 0x1E2CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2CA0u, 0x25F8D8u, 0x25F8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8E0u;
label_25f8e0:
    // 0x25f8e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f8e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8e4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x25f8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x25f8e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25f8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25f8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8f0: 0xc078b08  jal         func_1E2C20
    ctx->pc = 0x25F8F0u;
    SET_GPR_U32(ctx, 31, 0x25F8F8u);
    ctx->pc = 0x1E2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2C20u, 0x25F8F0u, 0x25F8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8F8u;
label_25f8f8:
    // 0x25f8f8: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x25f8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x25f8fc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x25f8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f900: 0xc0788e4  jal         func_1E2390
    ctx->pc = 0x25F900u;
    SET_GPR_U32(ctx, 31, 0x25F908u);
    ctx->pc = 0x1E2390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2390u, 0x25F900u, 0x25F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F908u;
label_25f908:
    // 0x25f908: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x25f908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25f90c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x25f90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f910: 0xc078c10  jal         func_1E3040
    ctx->pc = 0x25F910u;
    SET_GPR_U32(ctx, 31, 0x25F918u);
    ctx->pc = 0x1E3040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3040u, 0x25F910u, 0x25F918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F918u;
label_25f918:
    // 0x25f918: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x25f918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x25f91c: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x25f91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x25f920: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x25F920u;
    SET_GPR_U32(ctx, 31, 0x25F928u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x25F920u, 0x25F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F928u;
label_25f928:
    // 0x25f928: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25f928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25f92c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x25f92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x25f930: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x25f930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25f934: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25f934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f938: 0xc078a50  jal         func_1E2940
    ctx->pc = 0x25F938u;
    SET_GPR_U32(ctx, 31, 0x25F940u);
    ctx->pc = 0x1E2940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2940u, 0x25F938u, 0x25F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F940u;
label_25f940:
    // 0x25f940: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f944: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x25f944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25f948: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x25f948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25f94c: 0xc0789e8  jal         func_1E27A0
    ctx->pc = 0x25F94Cu;
    SET_GPR_U32(ctx, 31, 0x25F954u);
    ctx->pc = 0x1E27A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E27A0u, 0x25F94Cu, 0x25F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F954u;
label_25f954:
    // 0x25f954: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25f954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f958: 0xc075888  jal         func_1D6220
    ctx->pc = 0x25F958u;
    SET_GPR_U32(ctx, 31, 0x25F960u);
    ctx->pc = 0x1D6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6220u, 0x25F958u, 0x25F960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F960u;
label_25f960:
    // 0x25f960: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x25f960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25f964: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25f964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25f968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f96c: 0xc078b08  jal         func_1E2C20
    ctx->pc = 0x25F96Cu;
    SET_GPR_U32(ctx, 31, 0x25F974u);
    ctx->pc = 0x1E2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2C20u, 0x25F96Cu, 0x25F974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F974u;
label_25f974:
    // 0x25f974: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25f974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f978: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25f978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f97c: 0xc0789e8  jal         func_1E27A0
    ctx->pc = 0x25F97Cu;
    SET_GPR_U32(ctx, 31, 0x25F984u);
    ctx->pc = 0x1E27A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E27A0u, 0x25F97Cu, 0x25F984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F984u;
label_25f984:
    // 0x25f984: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x25f984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f988: 0x2464001f  addiu       $a0, $v1, 0x1F
    ctx->pc = 0x25f988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x25f98c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x25f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x25f990: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x25f990u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x25f994: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25f994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25f998: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x25f998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25f99c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x25f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f9a0: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x25f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_25f9a4:
    // 0x25f9a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25f9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f9a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f9ac: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x25f9acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25f9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x25F9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F9B8u;
    // 0x25f9b8: 0x0  nop
    ctx->pc = 0x25f9b8u;
    // NOP
    // 0x25f9bc: 0x0  nop
    ctx->pc = 0x25f9bcu;
    // NOP
    ctx->pc = 0x25f9c0u;
}
