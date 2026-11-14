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

// Function: sub_004E64C8
// Address: 0x4e64c8 - 0x4e64e0
void sub_004E64C8_0x4e64c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E64C8_0x4e64c8");
#endif

    switch (ctx->pc) {
        case 0x4e64d8u: goto label_4e64d8;
        default: break;
    }

    ctx->pc = 0x4e64c8u;

    // 0x4e64c8: 0x445f474d  .word       0x445F474D                   # cfc1        $ra, $8 # 0000074D <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e64c8u;
    SET_GPR_U32(ctx, 31, 0); // Unimplemented FCR8
    // 0x4e64cc: 0x6b6e6972  ldl         $t6, 0x6972($k1)
    ctx->pc = 0x4e64ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4e64d0: 0x69485f  .word       0x0069485F                   # ddivu       $t1, $v1, $t1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e64d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E64D0 raw=0x0069485F");
    // 0x4e64d4: 0x0  nop
    ctx->pc = 0x4e64d4u;
    // NOP
label_4e64d8:
    // 0x4e64d8: 0x0  nop
    ctx->pc = 0x4e64d8u;
    // NOP
    // 0x4e64dc: 0x0  nop
    ctx->pc = 0x4e64dcu;
    // NOP
    ctx->pc = 0x4e64e0u;
}
