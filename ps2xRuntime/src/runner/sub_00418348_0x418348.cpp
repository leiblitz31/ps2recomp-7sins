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

// Function: sub_00418348
// Address: 0x418348 - 0x4183d0
void sub_00418348_0x418348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418348_0x418348");
#endif

    switch (ctx->pc) {
        case 0x418368u: goto label_418368;
        default: break;
    }

    ctx->pc = 0x418348u;

    // 0x418348: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x418348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x41834c: 0x24840094  addiu       $a0, $a0, 0x94
    ctx->pc = 0x41834cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x418350: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x418350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x418354: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x418354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x418358: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x418358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x41835c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x41835cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x418360: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x418360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x418364: 0x0  nop
    ctx->pc = 0x418364u;
    // NOP
label_418368:
    // 0x418368: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x418368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41836c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x41836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x418370: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x418370u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x418374: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x418374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x418378: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x418378u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x41837c: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x41837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x418380: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x418380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x418384: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x418384u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x418388: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x418388u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x41838c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x41838cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x418390: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x418390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x418394: 0x0  nop
    ctx->pc = 0x418394u;
    // NOP
    // 0x418398: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x418398u;
    {
        const bool branch_taken_0x418398 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x418398) {
            ctx->pc = 0x41839Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x418398u;
            // 0x41839c: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4183A8u;
            goto label_4183a8;
        }
    }
    ctx->pc = 0x4183A0u;
    // 0x4183a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4183A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4183A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4183A0u;
        // 0x4183a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4183A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4183A8u;
label_4183a8:
    // 0x4183a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4183a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4183ac: 0x0  nop
    ctx->pc = 0x4183acu;
    // NOP
    // 0x4183b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x4183B0u;
    {
        const bool branch_taken_0x4183b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4183b0) {
            ctx->pc = 0x4183B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4183B0u;
            // 0x4183b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4183B8u;
            goto label_4183b8;
        }
    }
    ctx->pc = 0x4183B8u;
label_4183b8:
    // 0x4183b8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4183b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4183bc: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x4183bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4183c0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x4183C0u;
    {
        const bool branch_taken_0x4183c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4183C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4183C0u;
        // 0x4183c4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4183c0) {
            ctx->pc = 0x418368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_418368;
        }
    }
    ctx->pc = 0x4183C8u;
    // 0x4183c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4183C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4183CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4183C8u;
        // 0x4183cc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4183C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4183D0u;
}
