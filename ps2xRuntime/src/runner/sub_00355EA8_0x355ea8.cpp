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

// Function: sub_00355EA8
// Address: 0x355ea8 - 0x356048
void sub_00355EA8_0x355ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355EA8_0x355ea8");
#endif

    switch (ctx->pc) {
        case 0x355ef8u: goto label_355ef8;
        case 0x355fa0u: goto label_355fa0;
        default: break;
    }

    ctx->pc = 0x355ea8u;

    // 0x355ea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x355ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x355eac: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x355eacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355eb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x355eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x355eb4: 0x25280090  addiu       $t0, $t1, 0x90
    ctx->pc = 0x355eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
    // 0x355eb8: 0x25270098  addiu       $a3, $t1, 0x98
    ctx->pc = 0x355eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 152));
    // 0x355ebc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x355ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x355ec0: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x355ec0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x355ec4: 0x1542000e  bne         $t2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x355EC4u;
    {
        const bool branch_taken_0x355ec4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x355EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355EC4u;
        // 0x355ec8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355ec4) {
            ctx->pc = 0x355F00u;
            goto label_355f00;
        }
    }
    ctx->pc = 0x355ECCu;
    // 0x355ecc: 0xc523009c  lwc1        $f3, 0x9C($t1)
    ctx->pc = 0x355eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x355ed0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x355ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x355ed4: 0xc5220090  lwc1        $f2, 0x90($t1)
    ctx->pc = 0x355ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x355ed8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x355ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355edc: 0xc5210094  lwc1        $f1, 0x94($t1)
    ctx->pc = 0x355edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355ee0: 0xc5200098  lwc1        $f0, 0x98($t1)
    ctx->pc = 0x355ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355ee4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x355ee4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x355ee8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x355ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x355eec: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x355eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x355ef0: 0xc0d4c7e  jal         func_3531F8
    ctx->pc = 0x355EF0u;
    SET_GPR_U32(ctx, 31, 0x355EF8u);
    ctx->pc = 0x355EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355EF0u;
    // 0x355ef4: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3531F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3531F8u, 0x355EF0u, 0x355EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355EF8u;
label_355ef8:
    // 0x355ef8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x355EF8u;
    {
        const bool branch_taken_0x355ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355EF8u;
        // 0x355efc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355ef8) {
            ctx->pc = 0x35603Cu;
            goto label_35603c;
        }
    }
    ctx->pc = 0x355F00u;
label_355f00:
    // 0x355f00: 0x18a0004d  blez        $a1, . + 4 + (0x4D << 2)
    ctx->pc = 0x355F00u;
    {
        const bool branch_taken_0x355f00 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x355F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355F00u;
        // 0x355f04: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355f00) {
            ctx->pc = 0x356038u;
            goto label_356038;
        }
    }
    ctx->pc = 0x355F08u;
    // 0x355f08: 0x30460003  andi        $a2, $v0, 0x3
    ctx->pc = 0x355f08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x355f0c: 0x10c00024  beqz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x355F0Cu;
    {
        const bool branch_taken_0x355f0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x355F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355F0Cu;
        // 0x355f10: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355f0c) {
            ctx->pc = 0x355FA0u;
            goto label_355fa0;
        }
    }
    ctx->pc = 0x355F14u;
    // 0x355f14: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x355f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x355f18: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x355F18u;
    {
        const bool branch_taken_0x355f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355F18u;
        // 0x355f1c: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x355f18) {
            ctx->pc = 0x355F74u;
            goto label_355f74;
        }
    }
    ctx->pc = 0x355F20u;
    // 0x355f20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x355F20u;
    {
        const bool branch_taken_0x355f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355F20u;
        // 0x355f24: 0xc5210090  lwc1        $f1, 0x90($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x355f20) {
            ctx->pc = 0x355F50u;
            goto label_355f50;
        }
    }
    ctx->pc = 0x355F28u;
    // 0x355f28: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x355f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x355f2c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x355f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x355f30: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x355f30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x355f34: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x355f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355f38: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x355f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x355f3c: 0xc5210098  lwc1        $f1, 0x98($t1)
    ctx->pc = 0x355f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355f40: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x355f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x355f44: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x355f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355f48: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x355f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x355f4c: 0xc5210090  lwc1        $f1, 0x90($t1)
    ctx->pc = 0x355f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_355f50:
    // 0x355f50: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x355f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x355f54: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x355f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x355f58: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x355f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355f5c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x355f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x355f60: 0xc5210098  lwc1        $f1, 0x98($t1)
    ctx->pc = 0x355f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355f64: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x355f64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x355f68: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x355f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355f6c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x355f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x355f70: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x355f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_355f74:
    // 0x355f74: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x355f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355f78: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x355f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x355f7c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x355f7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x355f80: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x355f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355f84: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x355f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x355f88: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x355f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355f8c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x355f8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x355f90: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x355f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355f94: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x355f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x355f98: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x355F98u;
    {
        const bool branch_taken_0x355f98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x355F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355F98u;
        // 0x355f9c: 0x6a1821  addu        $v1, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355f98) {
            ctx->pc = 0x356038u;
            goto label_356038;
        }
    }
    ctx->pc = 0x355FA0u;
label_355fa0:
    // 0x355fa0: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x355fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355fa4: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x355fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x355fa8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x355fa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x355fac: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x355facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355fb0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x355fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x355fb4: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x355fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355fb8: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x355fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x355fbc: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x355fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355fc0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x355fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x355fc4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x355fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x355fc8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x355fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355fcc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x355fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x355fd0: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x355fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355fd4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x355fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x355fd8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x355fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355fdc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x355fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x355fe0: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x355fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355fe4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x355fe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x355fe8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x355fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x355fec: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x355fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355ff0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x355ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x355ff4: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x355ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355ff8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x355ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x355ffc: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x355ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356000: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x356000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x356004: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x356004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356008: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x356008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x35600c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x35600cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x356010: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x356010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356014: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x356014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x356018: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x356018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35601c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x35601cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x356020: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x356020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356024: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x356024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x356028: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x356028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35602c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x35602cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x356030: 0x14a0ffdb  bnez        $a1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x356030u;
    {
        const bool branch_taken_0x356030 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x356034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356030u;
        // 0x356034: 0x6a1821  addu        $v1, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356030) {
            ctx->pc = 0x355FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355fa0;
        }
    }
    ctx->pc = 0x356038u;
label_356038:
    // 0x356038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x356038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35603c:
    // 0x35603c: 0x3e00008  jr          $ra
    ctx->pc = 0x35603Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35603Cu;
        // 0x356040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35603Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356044u;
    // 0x356044: 0x0  nop
    ctx->pc = 0x356044u;
    // NOP
    ctx->pc = 0x356048u;
}
