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

// Function: sub_00323F68
// Address: 0x323f68 - 0x324008
void sub_00323F68_0x323f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323F68_0x323f68");
#endif

    switch (ctx->pc) {
        case 0x323f98u: goto label_323f98;
        case 0x323facu: goto label_323fac;
        default: break;
    }

    ctx->pc = 0x323f68u;

    // 0x323f68: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x323f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x323f6c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x323f6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x323f70: 0x8c43b1f4  lw          $v1, -0x4E0C($v0)
    ctx->pc = 0x323f70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1F4u));
    // 0x323f74: 0x24050114  addiu       $a1, $zero, 0x114
    ctx->pc = 0x323f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x323f78: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x323f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x323f7c: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x323f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x323f80: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x323f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x323f84: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x323f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x323f88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323f8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x323f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x323f90: 0xc103322  jal         func_40CC88
    ctx->pc = 0x323F90u;
    SET_GPR_U32(ctx, 31, 0x323F98u);
    ctx->pc = 0x323F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323F90u;
    // 0x323f94: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x323F90u, 0x323F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323F98u;
label_323f98:
    // 0x323f98: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x323F98u;
    {
        const bool branch_taken_0x323f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F98u;
        // 0x323f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323f98) {
            ctx->pc = 0x323FF0u;
            goto label_323ff0;
        }
    }
    ctx->pc = 0x323FA0u;
    // 0x323fa0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x323fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323fa4: 0xc10480a  jal         func_412028
    ctx->pc = 0x323FA4u;
    SET_GPR_U32(ctx, 31, 0x323FACu);
    ctx->pc = 0x323FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323FA4u;
    // 0x323fa8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x323FA4u, 0x323FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323FACu;
label_323fac:
    // 0x323fac: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x323facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x323fb0: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x323FB0u;
    {
        const bool branch_taken_0x323fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x323FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323FB0u;
        // 0x323fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323fb0) {
            ctx->pc = 0x323FF4u;
            goto label_323ff4;
        }
    }
    ctx->pc = 0x323FB8u;
    // 0x323fb8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x323fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323fbc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x323fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323fc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x323fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323fc4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x323fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x323fc8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x323fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x323fcc: 0x8ba3000b  lwl         $v1, 0xB($sp)
    ctx->pc = 0x323fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x323fd0: 0x9ba30008  lwr         $v1, 0x8($sp)
    ctx->pc = 0x323fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x323fd4: 0xaa03000b  swl         $v1, 0xB($s0)
    ctx->pc = 0x323fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x323fd8: 0xba030008  swr         $v1, 0x8($s0)
    ctx->pc = 0x323fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x323fdc: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x323fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323fe0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x323fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x323fe4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x323fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323fe8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x323FE8u;
    {
        const bool branch_taken_0x323fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323FE8u;
        // 0x323fec: 0xe6010010  swc1        $f1, 0x10($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x323fe8) {
            ctx->pc = 0x323FF4u;
            goto label_323ff4;
        }
    }
    ctx->pc = 0x323FF0u;
label_323ff0:
    // 0x323ff0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x323ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_323ff4:
    // 0x323ff4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x323ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x323ff8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x323ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x323ffc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x323ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324000: 0x3e00008  jr          $ra
    ctx->pc = 0x324000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324000u;
        // 0x324004: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324008u;
}
