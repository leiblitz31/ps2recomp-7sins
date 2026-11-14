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

// Function: sub_004E5C90
// Address: 0x4e5c90 - 0x4e5cd0
void sub_004E5C90_0x4e5c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5C90_0x4e5c90");
#endif

    switch (ctx->pc) {
        case 0x4e5ca0u: goto label_4e5ca0;
        default: break;
    }

    ctx->pc = 0x4e5c90u;

    // 0x4e5c90: 0x42474d26  .word       0x42474D26                   # INVALID     $s2, $a3, 0x4D26 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e5c90u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E5C90 raw=0x42474D26");
    // 0x4e5c94: 0x55425f4b  bnel        $t2, $v0, . + 4 + (0x5F4B << 2)
    ctx->pc = 0x4E5C94u;
    {
        const bool branch_taken_0x4e5c94 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e5c94) {
            ctx->pc = 0x4E5C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5C94u;
            // 0x4e5c98: 0x4c494b47  .word       0x4C494B47                   # INVALID     $v0, $t1, 0x4B47 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E5C98 raw=0x4C494B47");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FD9C4u;
            return;
        }
    }
    ctx->pc = 0x4E5C9Cu;
    // 0x4e5c9c: 0x52454c  .word       0x0052454C                   # syscall     277 # 00520000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5c9cu;
    ctx->pc = 0x4E5CA0u;
runtime->handleSyscall(rdram, ctx, 0x14915u);
label_4e5ca0:
    // 0x4e5ca0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e5ca0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e5ca4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e5ca4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e5ca8: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e5ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4e5cac: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5CACu;
    {
        const bool branch_taken_0x4e5cac = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e5cac) {
            ctx->pc = 0x4E5CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5CACu;
            // 0x4e5cb0: 0x696e696d  ldl         $t6, 0x696D($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500E44u;
            return;
        }
    }
    ctx->pc = 0x4E5CB4u;
    // 0x4e5cb4: 0x656d6167  daddiu      $t5, $t3, 0x6167
    ctx->pc = 0x4e5cb4u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24935);
    // 0x4e5cb8: 0x6e705c73  ldr         $s0, 0x5C73($s3)
    ctx->pc = 0x4e5cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x4e5cbc: 0x75625f6c  .word       0x75625F6C                   # INVALID     $t3, $v0, 0x5F6C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5cbcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5CBC raw=0x75625F6C");
    // 0x4e5cc0: 0x6c696b67  ldr         $t1, 0x6B67($v1)
    ctx->pc = 0x4e5cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27495); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e5cc4: 0x2e72656c  sltiu       $s2, $s3, 0x656C
    ctx->pc = 0x4e5cc4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25964) ? 1 : 0);
    // 0x4e5cc8: 0x747874  teq         $v1, $s4, 481
    ctx->pc = 0x4e5cc8u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e5ccc: 0x0  nop
    ctx->pc = 0x4e5cccu;
    // NOP
    ctx->pc = 0x4e5cd0u;
}
