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

// Function: sub_004E3F90
// Address: 0x4e3f90 - 0x4e3fa0
void sub_004E3F90_0x4e3f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3F90_0x4e3f90");
#endif

    switch (ctx->pc) {
        case 0x4e3f98u: goto label_4e3f98;
        default: break;
    }

    ctx->pc = 0x4e3f90u;

    // 0x4e3f90: 0x7265706f  .word       0x7265706F                   # INVALID     $s3, $a1, 0x706F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e3f90u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x4E3F90 raw=0x7265706F");
    // 0x4e3f94: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x4e3f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e3f98:
    // 0x4e3f98: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3f98u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    // 0x4e3f9c: 0x0  nop
    ctx->pc = 0x4e3f9cu;
    // NOP
    ctx->pc = 0x4e3fa0u;
}
