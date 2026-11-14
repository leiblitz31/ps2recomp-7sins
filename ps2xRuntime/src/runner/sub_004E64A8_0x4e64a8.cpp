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

// Function: sub_004E64A8
// Address: 0x4e64a8 - 0x4e64b8
void sub_004E64A8_0x4e64a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E64A8_0x4e64a8");
#endif

    ctx->pc = 0x4e64a8u;

    // 0x4e64a8: 0x445f474d  .word       0x445F474D                   # cfc1        $ra, $8 # 0000074D <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e64a8u;
    SET_GPR_U32(ctx, 31, 0); // Unimplemented FCR8
    // 0x4e64ac: 0x6b6e6972  ldl         $t6, 0x6972($k1)
    ctx->pc = 0x4e64acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4e64b0: 0x6f4c5f  .word       0x006F4C5F                   # ddivu       $t1, $v1, $t7 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e64b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E64B0 raw=0x006F4C5F");
    // 0x4e64b4: 0x0  nop
    ctx->pc = 0x4e64b4u;
    // NOP
    ctx->pc = 0x4e64b8u;
}
