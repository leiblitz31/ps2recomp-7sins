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

// Function: sub_004E51E0
// Address: 0x4e51e0 - 0x4e51f0
void sub_004E51E0_0x4e51e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E51E0_0x4e51e0");
#endif

    ctx->pc = 0x4e51e0u;

    // 0x4e51e0: 0x705f6373  .word       0x705F6373                   # INVALID     $v0, $ra, 0x6373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e51e0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E51E0 raw=0x705F6373");
    // 0x4e51e4: 0x69666f72  ldl         $a2, 0x6F72($t3)
    ctx->pc = 0x4e51e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4e51e8: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e51e8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    // 0x4e51ec: 0x0  nop
    ctx->pc = 0x4e51ecu;
    // NOP
    ctx->pc = 0x4e51f0u;
}
