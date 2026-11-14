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

// Function: sub_004E7058
// Address: 0x4e7058 - 0x4e7068
void sub_004E7058_0x4e7058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7058_0x4e7058");
#endif

    ctx->pc = 0x4e7058u;

    // 0x4e7058: 0x42747874  .word       0x42747874                   # INVALID     $s3, $s4, 0x7874 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e7058u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x4E7058 raw=0x42747874");
    // 0x4e705c: 0x6f747475  ldr         $s4, 0x7475($k1)
    ctx->pc = 0x4e705cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29813); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x4e7060: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e7060u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    // 0x4e7064: 0x0  nop
    ctx->pc = 0x4e7064u;
    // NOP
    ctx->pc = 0x4e7068u;
}
