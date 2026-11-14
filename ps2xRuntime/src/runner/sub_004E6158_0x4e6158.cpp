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

// Function: sub_004E6158
// Address: 0x4e6158 - 0x4e6198
void sub_004E6158_0x4e6158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6158_0x4e6158");
#endif

    switch (ctx->pc) {
        case 0x4e6194u: goto label_4e6194;
        default: break;
    }

    ctx->pc = 0x4e6158u;

    // 0x4e6158: 0x5f474d26  .word       0x5F474D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6158u;
    {
        const bool branch_taken_0x4e6158 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e6158) {
            ctx->pc = 0x4E615Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6158u;
            // 0x4e615c: 0x454d414e  .word       0x454D414E                   # INVALID     $t2, $t5, 0x414E # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xE at 0x4E615C raw=0x454D414E");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F95F4u;
            return;
        }
    }
    ctx->pc = 0x4E6160u;
    // 0x4e6160: 0x4952445f  .word       0x4952445F                   # INVALID     $t2, $s2, 0x445F # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4e6160u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4E6160 raw=0x4952445F");
    // 0x4e6164: 0x4b4e  .word       0x00004B4E                   # INVALID     $zero, $zero, 0x4B4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6164u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E6164 raw=0x00004B4E");
    // 0x4e6168: 0x0  nop
    ctx->pc = 0x4e6168u;
    // NOP
    // 0x4e616c: 0x0  nop
    ctx->pc = 0x4e616cu;
    // NOP
    // 0x4e6170: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e6170u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e6174: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e6174u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e6178: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e6178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4e617c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E617Cu;
    {
        const bool branch_taken_0x4e617c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e617c) {
            ctx->pc = 0x4E6180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E617Cu;
            // 0x4e6180: 0x696e696d  ldl         $t6, 0x696D($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x501314u;
            return;
        }
    }
    ctx->pc = 0x4E6184u;
    // 0x4e6184: 0x656d6167  daddiu      $t5, $t3, 0x6167
    ctx->pc = 0x4e6184u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24935);
    // 0x4e6188: 0x6e705c73  ldr         $s0, 0x5C73($s3)
    ctx->pc = 0x4e6188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x4e618c: 0x72645f6c  .word       0x72645F6C                   # INVALID     $s3, $a0, 0x5F6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e618cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4E618C raw=0x72645F6C");
    // 0x4e6190: 0x2e6b6e69  sltiu       $t3, $s3, 0x6E69
    ctx->pc = 0x4e6190u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28265) ? 1 : 0);
label_4e6194:
    // 0x4e6194: 0x747874  teq         $v1, $s4, 481
    ctx->pc = 0x4e6194u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e6198u;
}
