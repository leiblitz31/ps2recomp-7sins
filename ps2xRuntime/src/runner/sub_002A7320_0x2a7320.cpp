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

// Function: sub_002A7320
// Address: 0x2a7320 - 0x2a73e0
void sub_002A7320_0x2a7320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7320_0x2a7320");
#endif

    switch (ctx->pc) {
        case 0x2a7354u: goto label_2a7354;
        case 0x2a73a0u: goto label_2a73a0;
        case 0x2a73b0u: goto label_2a73b0;
        default: break;
    }

    ctx->pc = 0x2a7320u;

    // 0x2a7320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a7320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a7324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a7324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a7328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a732c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2a732cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2a7330: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2a7330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2a7334: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x2a7334u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7338: 0x92020189  lbu         $v0, 0x189($s0)
    ctx->pc = 0x2a7338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 393)));
    // 0x2a733c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2A733Cu;
    {
        const bool branch_taken_0x2a733c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a733c) {
            ctx->pc = 0x2A73BCu;
            goto label_2a73bc;
        }
    }
    ctx->pc = 0x2A7344u;
    // 0x2a7344: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2a7344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2a7348: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2a7348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2a734c: 0xc0858ac  jal         func_2162B0
    ctx->pc = 0x2A734Cu;
    SET_GPR_U32(ctx, 31, 0x2A7354u);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2A734Cu, 0x2A7354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7354u;
label_2a7354:
    // 0x2a7354: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2a7354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2a7358: 0xa2000189  sb          $zero, 0x189($s0)
    ctx->pc = 0x2a7358u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 393), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a735c: 0x9202011c  lbu         $v0, 0x11C($s0)
    ctx->pc = 0x2a735cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2a7360: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A7360u;
    {
        const bool branch_taken_0x2a7360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7360) {
            ctx->pc = 0x2A7390u;
            goto label_2a7390;
        }
    }
    ctx->pc = 0x2A7368u;
    // 0x2a7368: 0x9202011c  lbu         $v0, 0x11C($s0)
    ctx->pc = 0x2a7368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2a736c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A736Cu;
    {
        const bool branch_taken_0x2a736c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a736c) {
            ctx->pc = 0x2A73BCu;
            goto label_2a73bc;
        }
    }
    ctx->pc = 0x2A7374u;
    // 0x2a7374: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x2a7374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7378: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a7378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2a737c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a737cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7380: 0x0  nop
    ctx->pc = 0x2a7380u;
    // NOP
    // 0x2a7384: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a7384u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7388: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2A7388u;
    {
        const bool branch_taken_0x2a7388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7388) {
            ctx->pc = 0x2A73BCu;
            goto label_2a73bc;
        }
    }
    ctx->pc = 0x2A7390u;
label_2a7390:
    // 0x2a7390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a7390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7394: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a7394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a7398: 0xc09d250  jal         func_274940
    ctx->pc = 0x2A7398u;
    SET_GPR_U32(ctx, 31, 0x2A73A0u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2A7398u, 0x2A73A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A73A0u;
label_2a73a0:
    // 0x2a73a0: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2a73a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2a73a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a73a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a73a8: 0xc121904  jal         func_486410
    ctx->pc = 0x2A73A8u;
    SET_GPR_U32(ctx, 31, 0x2A73B0u);
    ctx->pc = 0x486410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486410u, 0x2A73A8u, 0x2A73B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A73B0u;
label_2a73b0:
    // 0x2a73b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a73b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a73b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A73B4u;
    {
        const bool branch_taken_0x2a73b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a73b4) {
            ctx->pc = 0x2A73C0u;
            goto label_2a73c0;
        }
    }
    ctx->pc = 0x2A73BCu;
label_2a73bc:
    // 0x2a73bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2a73c0:
    // 0x2a73c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a73c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a73c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a73c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a73c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2a73c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a73cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A73CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A73CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A73D4u;
    // 0x2a73d4: 0x0  nop
    ctx->pc = 0x2a73d4u;
    // NOP
    // 0x2a73d8: 0x0  nop
    ctx->pc = 0x2a73d8u;
    // NOP
    // 0x2a73dc: 0x0  nop
    ctx->pc = 0x2a73dcu;
    // NOP
    ctx->pc = 0x2a73e0u;
}
