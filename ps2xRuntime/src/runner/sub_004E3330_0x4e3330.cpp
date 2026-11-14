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

// Function: sub_004E3330
// Address: 0x4e3330 - 0x4e3348
void sub_004E3330_0x4e3330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3330_0x4e3330");
#endif

    ctx->pc = 0x4e3330u;

    // 0x4e3330: 0x672e7866  daddiu      $t6, $t9, 0x7866
    ctx->pc = 0x4e3330u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30822);
    // 0x4e3334: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4e3334u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
    // 0x4e3338: 0x6c65722e  ldr         $a1, 0x722E($v1)
    ctx->pc = 0x4e3338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29230); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4e333c: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x4e333cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e3340: 0x766c2e6e  .word       0x766C2E6E                   # INVALID     $s3, $t4, 0x2E6E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3340u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3340 raw=0x766C2E6E");
    // 0x4e3344: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3344u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    ctx->pc = 0x4e3348u;
}
