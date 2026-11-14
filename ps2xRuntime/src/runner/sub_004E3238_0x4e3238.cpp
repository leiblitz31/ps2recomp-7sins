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

// Function: sub_004E3238
// Address: 0x4e3238 - 0x4e3248
void sub_004E3238_0x4e3238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3238_0x4e3238");
#endif

    ctx->pc = 0x4e3238u;

    // 0x4e3238: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e3238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e323c: 0x4345505f  .word       0x4345505F                   # INVALID     $k0, $a1, 0x505F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e323cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E323C raw=0x4345505F");
    // 0x4e3240: 0x4d5f4548  .word       0x4D5F4548                   # INVALID     $t2, $ra, 0x4548 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3240u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3240 raw=0x4D5F4548");
    // 0x4e3244: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3244u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    ctx->pc = 0x4e3248u;
}
