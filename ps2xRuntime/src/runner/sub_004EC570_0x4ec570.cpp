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

// Function: sub_004EC570
// Address: 0x4ec570 - 0x4ec580
void sub_004EC570_0x4ec570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC570_0x4ec570");
#endif

    ctx->pc = 0x4ec570u;

    // 0x4ec570: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4ec570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec574: 0x616d2e6c  daddi       $t5, $t3, 0x2E6C
    ctx->pc = 0x4ec574u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)11884; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    // 0x4ec578: 0x6f6863  .word       0x006F6863                   # subu        $t5, $v1, $t7 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec578u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x4ec57c: 0x0  nop
    ctx->pc = 0x4ec57cu;
    // NOP
    ctx->pc = 0x4ec580u;
}
