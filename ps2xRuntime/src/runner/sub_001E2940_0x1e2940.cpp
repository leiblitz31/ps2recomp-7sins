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

// Function: sub_001E2940
// Address: 0x1e2940 - 0x1e29f0
void sub_001E2940_0x1e2940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2940_0x1e2940");
#endif

    switch (ctx->pc) {
        case 0x1e2974u: goto label_1e2974;
        case 0x1e2988u: goto label_1e2988;
        case 0x1e299cu: goto label_1e299c;
        case 0x1e29acu: goto label_1e29ac;
        case 0x1e29c8u: goto label_1e29c8;
        default: break;
    }

    ctx->pc = 0x1e2940u;

    // 0x1e2940: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e2940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e2944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e2944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e2948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e2948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e294c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e294cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e2950: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2954: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1e2954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1e2958: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1e2958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x1e295c: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x1e295cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x1e2960: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x1e2960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x1e2964: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e2964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e2968: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1e2968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e296c: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E296Cu;
    SET_GPR_U32(ctx, 31, 0x1E2974u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E296Cu, 0x1E2974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2974u;
label_1e2974:
    // 0x1e2974: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e2974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2978: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1e2978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e297c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1e297cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e2980: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E2980u;
    SET_GPR_U32(ctx, 31, 0x1E2988u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E2980u, 0x1E2988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2988u;
label_1e2988:
    // 0x1e2988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e2988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e298c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e298cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e2990: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1e2990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e2994: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E2994u;
    SET_GPR_U32(ctx, 31, 0x1E299Cu);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E2994u, 0x1E299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E299Cu;
label_1e299c:
    // 0x1e299c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e299cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e29a0: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1e29a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1e29a4: 0xc078afc  jal         func_1E2BF0
    ctx->pc = 0x1E29A4u;
    SET_GPR_U32(ctx, 31, 0x1E29ACu);
    ctx->pc = 0x1E2BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2BF0u, 0x1E29A4u, 0x1E29ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E29ACu;
label_1e29ac:
    // 0x1e29ac: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e29acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e29b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e29b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e29b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e29b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e29b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e29b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e29bc: 0x27a8005c  addiu       $t0, $sp, 0x5C
    ctx->pc = 0x1e29bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1e29c0: 0xc078a7c  jal         func_1E29F0
    ctx->pc = 0x1E29C0u;
    SET_GPR_U32(ctx, 31, 0x1E29C8u);
    ctx->pc = 0x1E29F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E29F0u, 0x1E29C0u, 0x1E29C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E29C8u;
label_1e29c8:
    // 0x1e29c8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e29c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e29cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e29ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e29d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e29d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e29d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e29d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e29d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e29d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e29dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1e29dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e29e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E29E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E29E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E29E8u;
    // 0x1e29e8: 0x0  nop
    ctx->pc = 0x1e29e8u;
    // NOP
    // 0x1e29ec: 0x0  nop
    ctx->pc = 0x1e29ecu;
    // NOP
    ctx->pc = 0x1e29f0u;
}
