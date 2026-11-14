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

// Function: sub_004E6C00
// Address: 0x4e6c00 - 0x4e6c48
void sub_004E6C00_0x4e6c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6C00_0x4e6c00");
#endif

    ctx->pc = 0x4e6c00u;

    // 0x4e6c00: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6C00u;
    {
        const bool branch_taken_0x4e6c00 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6c00) {
            ctx->pc = 0x4E6C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6C00u;
            // 0x4e6c04: 0x6c616863  ldr         $at, 0x6863($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26723); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5021A8u;
            return;
        }
    }
    ctx->pc = 0x4E6C08u;
    // 0x4e6c08: 0x676e656c  daddiu      $t6, $k1, 0x656C
    ctx->pc = 0x4e6c08u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25964);
    // 0x4e6c0c: 0x32302565  andi        $s0, $s1, 0x2565
    ctx->pc = 0x4e6c0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9573);
    // 0x4e6c10: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6c10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x4e6c14: 0x0  nop
    ctx->pc = 0x4e6c14u;
    // NOP
    // 0x4e6c18: 0x0  nop
    ctx->pc = 0x4e6c18u;
    // NOP
    // 0x4e6c1c: 0x0  nop
    ctx->pc = 0x4e6c1cu;
    // NOP
    // 0x4e6c20: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e6c20u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e6c24: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e6c24u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e6c28: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e6c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4e6c2c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6C2Cu;
    {
        const bool branch_taken_0x4e6c2c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e6c2c) {
            ctx->pc = 0x4E6C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6C2Cu;
            // 0x4e6c30: 0x696e696d  ldl         $t6, 0x696D($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x501DC4u;
            return;
        }
    }
    ctx->pc = 0x4E6C34u;
    // 0x4e6c34: 0x656d6167  daddiu      $t5, $t3, 0x6167
    ctx->pc = 0x4e6c34u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24935);
    // 0x4e6c38: 0x6e705c73  ldr         $s0, 0x5C73($s3)
    ctx->pc = 0x4e6c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x4e6c3c: 0x69665f6c  ldl         $a2, 0x5F6C($t3)
    ctx->pc = 0x4e6c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24428); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4e6c40: 0x2e746867  sltiu       $s4, $s3, 0x6867
    ctx->pc = 0x4e6c40u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26727) ? 1 : 0);
    // 0x4e6c44: 0x747874  teq         $v1, $s4, 481
    ctx->pc = 0x4e6c44u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e6c48u;
}
