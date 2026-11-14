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

// Function: sub_00377620
// Address: 0x377620 - 0x377700
void sub_00377620_0x377620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377620_0x377620");
#endif

    switch (ctx->pc) {
        case 0x377654u: goto label_377654;
        case 0x3776b8u: goto label_3776b8;
        case 0x3776d8u: goto label_3776d8;
        default: break;
    }

    ctx->pc = 0x377620u;

label_377620:
    // 0x377620: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x377620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x377624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377628: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x377628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x37762c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x37762cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x377630: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x377630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x377634: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x377634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x377638: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x377638u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x37763c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37763cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377640: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x377640u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x377644: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x377644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x377648: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x377648u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x37764c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x37764Cu;
    SET_GPR_U32(ctx, 31, 0x377654u);
    ctx->pc = 0x377650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37764Cu;
    // 0x377650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x37764Cu, 0x377654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377654u;
label_377654:
    // 0x377654: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x377654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x377658: 0x2462c430  addiu       $v0, $v1, -0x3BD0
    ctx->pc = 0x377658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951984));
    // 0x37765c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x37765cu;
    { uint32_t bits = FAST_READ32(0x61C448u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377660: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x377660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x377664: 0x0  nop
    ctx->pc = 0x377664u;
    // NOP
    // 0x377668: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x377668u;
    {
        const bool branch_taken_0x377668 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377668u;
        // 0x37766c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377668) {
            ctx->pc = 0x3776E0u;
            goto label_3776e0;
        }
    }
    ctx->pc = 0x377670u;
    // 0x377670: 0x4615ad02  mul.s       $f20, $f21, $f21
    ctx->pc = 0x377670u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x377674: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x377674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x377678: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x377678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x37767c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x37767cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x377680: 0x8c64c430  lw          $a0, -0x3BD0($v1)
    ctx->pc = 0x377680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951984)));
    // 0x377684: 0x24c674e8  addiu       $a2, $a2, 0x74E8
    ctx->pc = 0x377684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29928));
    // 0x377688: 0x4614a000  add.s       $f0, $f20, $f20
    ctx->pc = 0x377688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x37768c: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x37768cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x377690: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x377690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x377694: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x377694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x377698: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x377698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37769c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x37769cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3776a0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3776a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3776a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3776a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3776a8: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x3776a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3776ac: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3776acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3776b0: 0xc0c6d5c  jal         func_31B570
    ctx->pc = 0x3776B0u;
    SET_GPR_U32(ctx, 31, 0x3776B8u);
    ctx->pc = 0x3776B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3776B0u;
    // 0x3776b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B570u, 0x3776B0u, 0x3776B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3776B8u;
label_3776b8:
    // 0x3776b8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3776b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3776bc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3776bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3776c0: 0x0  nop
    ctx->pc = 0x3776c0u;
    // NOP
    // 0x3776c4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3776C4u;
    {
        const bool branch_taken_0x3776c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3776C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3776C4u;
        // 0x3776c8: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3776c4) {
            ctx->pc = 0x3776E0u;
            goto label_3776e0;
        }
    }
    ctx->pc = 0x3776CCu;
    // 0x3776cc: 0x4615ab00  add.s       $f12, $f21, $f21
    ctx->pc = 0x3776ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x3776d0: 0xc0ddd88  jal         func_377620
    ctx->pc = 0x3776D0u;
    SET_GPR_U32(ctx, 31, 0x3776D8u);
    ctx->pc = 0x3776D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3776D0u;
    // 0x3776d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377620u;
    goto label_377620;
    ctx->pc = 0x3776D8u;
label_3776d8:
    // 0x3776d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3776D8u;
    {
        const bool branch_taken_0x3776d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3776DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3776D8u;
        // 0x3776dc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3776d8) {
            ctx->pc = 0x3776E4u;
            goto label_3776e4;
        }
    }
    ctx->pc = 0x3776E0u;
label_3776e0:
    // 0x3776e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3776e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3776e4:
    // 0x3776e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3776e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3776e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3776e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3776ec: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x3776ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3776f0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3776f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3776f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3776F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3776F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3776F4u;
        // 0x3776f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3776F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3776FCu;
    // 0x3776fc: 0x0  nop
    ctx->pc = 0x3776fcu;
    // NOP
    ctx->pc = 0x377700u;
}
