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

// Function: sub_004E3280
// Address: 0x4e3280 - 0x4e3298
void sub_004E3280_0x4e3280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3280_0x4e3280");
#endif

    ctx->pc = 0x4e3280u;

    // 0x4e3280: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e3280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e3284: 0x756f725f  .word       0x756F725F                   # INVALID     $t3, $t7, 0x725F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3284u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3284 raw=0x756F725F");
    // 0x4e3288: 0x765f6567  .word       0x765F6567                   # INVALID     $s2, $ra, 0x6567 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3288u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3288 raw=0x765F6567");
    // 0x4e328c: 0x656c6f69  daddiu      $t4, $t3, 0x6F69
    ctx->pc = 0x4e328cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28521);
    // 0x4e3290: 0x65636e  .word       0x0065636E                   # dsub        $t4, $v1, $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3290u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
    // 0x4e3294: 0x0  nop
    ctx->pc = 0x4e3294u;
    // NOP
    ctx->pc = 0x4e3298u;
}
