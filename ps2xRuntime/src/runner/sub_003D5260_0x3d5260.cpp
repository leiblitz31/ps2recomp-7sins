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

// Function: sub_003D5260
// Address: 0x3d5260 - 0x3d52f8
void sub_003D5260_0x3d5260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5260_0x3d5260");
#endif

    switch (ctx->pc) {
        case 0x3d529cu: goto label_3d529c;
        case 0x3d52b4u: goto label_3d52b4;
        default: break;
    }

    ctx->pc = 0x3d5260u;

    // 0x3d5260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d5260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3d5264: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3d5264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3d5268: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3d5268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3d526c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d526cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5270: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3d5270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3d5274: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d5274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5278: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3d5278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3d527c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d527cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d5280: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d5280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3d5284: 0x96120084  lhu         $s2, 0x84($s0)
    ctx->pc = 0x3d5284u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3d5288: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x3d5288u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3d528c: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D528Cu;
    {
        const bool branch_taken_0x3d528c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D528Cu;
        // 0x3d5290: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d528c) {
            ctx->pc = 0x3D52D4u;
            goto label_3d52d4;
        }
    }
    ctx->pc = 0x3D5294u;
    // 0x3d5294: 0xc0e69e4  jal         func_39A790
    ctx->pc = 0x3D5294u;
    SET_GPR_U32(ctx, 31, 0x3D529Cu);
    ctx->pc = 0x39A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A790u, 0x3D5294u, 0x3D529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D529Cu;
label_3d529c:
    // 0x3d529c: 0x96080080  lhu         $t0, 0x80($s0)
    ctx->pc = 0x3d529cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3d52a0: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x3d52a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3d52a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d52a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d52a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d52a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d52ac: 0xc0f51b8  jal         func_3D46E0
    ctx->pc = 0x3D52ACu;
    SET_GPR_U32(ctx, 31, 0x3D52B4u);
    ctx->pc = 0x3D52B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D52ACu;
    // 0x3d52b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D46E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D46E0u, 0x3D52ACu, 0x3D52B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D52B4u;
label_3d52b4:
    // 0x3d52b4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3d52b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d52b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d52b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d52bc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3d52bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d52c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3d52c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3d52c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d52c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d52c8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3d52c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x3d52cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D52CCu;
    {
        const bool branch_taken_0x3d52cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D52CCu;
        // 0x3d52d0: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d52cc) {
            ctx->pc = 0x3D52D8u;
            goto label_3d52d8;
        }
    }
    ctx->pc = 0x3D52D4u;
label_3d52d4:
    // 0x3d52d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d52d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d52d8:
    // 0x3d52d8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3d52d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d52dc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3d52dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d52e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d52e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d52e4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3d52e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d52e8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3d52e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d52ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d52ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d52f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D52F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D52F0u;
        // 0x3d52f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D52F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D52F8u;
}
