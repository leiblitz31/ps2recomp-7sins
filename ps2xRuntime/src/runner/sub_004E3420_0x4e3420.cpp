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

// Function: sub_004E3420
// Address: 0x4e3420 - 0x4e3440
void sub_004E3420_0x4e3420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3420_0x4e3420");
#endif

    switch (ctx->pc) {
        case 0x4e343cu: goto label_4e343c;
        default: break;
    }

    ctx->pc = 0x4e3420u;

    // 0x4e3420: 0x6e657261  ldr         $a1, 0x7261($s3)
    ctx->pc = 0x4e3420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4e3424: 0x63612061  daddi       $at, $k1, 0x2061
    ctx->pc = 0x4e3424u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8289; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
    // 0x4e3428: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e3428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e342c: 0x72756320  .word       0x72756320                   # madd1       $t4, $s3, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e342cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x4e3430: 0x3a726f73  xori        $s2, $s3, 0x6F73
    ctx->pc = 0x4e3430u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28531);
    // 0x4e3434: 0x58455320  .word       0x58455320                   # blezl       $v0, . + 4 + (0x5320 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E3434u;
    {
        const bool branch_taken_0x4e3434 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e3434) {
            ctx->pc = 0x4E3438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3434u;
            // 0x4e3438: 0xa45  .word       0x00000A45                   # INVALID     $zero, $zero, 0xA45 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E3438 raw=0x00000A45");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F80B8u;
            return;
        }
    }
    ctx->pc = 0x4E343Cu;
label_4e343c:
    // 0x4e343c: 0x0  nop
    ctx->pc = 0x4e343cu;
    // NOP
    ctx->pc = 0x4e3440u;
}
