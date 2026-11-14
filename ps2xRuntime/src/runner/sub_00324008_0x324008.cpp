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

// Function: sub_00324008
// Address: 0x324008 - 0x3240a8
void sub_00324008_0x324008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324008_0x324008");
#endif

    switch (ctx->pc) {
        case 0x324040u: goto label_324040;
        case 0x324084u: goto label_324084;
        default: break;
    }

    ctx->pc = 0x324008u;

    // 0x324008: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x324008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x32400c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32400cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x324010: 0x8c43b1f4  lw          $v1, -0x4E0C($v0)
    ctx->pc = 0x324010u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1F4u));
    // 0x324014: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x324014u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x324018: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x324018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x32401c: 0x24050114  addiu       $a1, $zero, 0x114
    ctx->pc = 0x32401cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x324020: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x324020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x324024: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x324024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x324028: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x324028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32402c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32402cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x324030: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x324030u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x324034: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x324034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x324038: 0xc103404  jal         func_40D010
    ctx->pc = 0x324038u;
    SET_GPR_U32(ctx, 31, 0x324040u);
    ctx->pc = 0x32403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324038u;
    // 0x32403c: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x324038u, 0x324040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324040u;
label_324040:
    // 0x324040: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x324040u;
    {
        const bool branch_taken_0x324040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324040u;
        // 0x324044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324040) {
            ctx->pc = 0x324090u;
            goto label_324090;
        }
    }
    ctx->pc = 0x324048u;
    // 0x324048: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x324048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32404c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32404cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x324050: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x324050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324054: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x324054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x324058: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x324058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32405c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x32405cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x324060: 0x8a02000b  lwl         $v0, 0xB($s0)
    ctx->pc = 0x324060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x324064: 0x9a020008  lwr         $v0, 0x8($s0)
    ctx->pc = 0x324064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x324068: 0xaba2000b  swl         $v0, 0xB($sp)
    ctx->pc = 0x324068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x32406c: 0xbba20008  swr         $v0, 0x8($sp)
    ctx->pc = 0x32406cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x324070: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x324070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324074: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x324074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x324078: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x324078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32407c: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x32407Cu;
    SET_GPR_U32(ctx, 31, 0x324084u);
    ctx->pc = 0x324080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32407Cu;
    // 0x324080: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x32407Cu, 0x324084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324084u;
label_324084:
    // 0x324084: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x324084u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x324088: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x324088u;
    {
        const bool branch_taken_0x324088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324088u;
        // 0x32408c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324088) {
            ctx->pc = 0x324094u;
            goto label_324094;
        }
    }
    ctx->pc = 0x324090u;
label_324090:
    // 0x324090: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x324090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324094:
    // 0x324094: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x324094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x324098: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x324098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32409c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32409cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3240a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3240A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3240A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3240A0u;
        // 0x3240a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3240A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3240A8u;
}
