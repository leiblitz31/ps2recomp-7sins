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

// Function: sub_004ECD78
// Address: 0x4ecd78 - 0x4ecd90
void sub_004ECD78_0x4ecd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECD78_0x4ecd78");
#endif

    switch (ctx->pc) {
        case 0x4ecd7cu: goto label_4ecd7c;
        default: break;
    }

    ctx->pc = 0x4ecd78u;

    // 0x4ecd78: 0x652e7866  daddiu      $t6, $t1, 0x7866
    ctx->pc = 0x4ecd78u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)30822);
label_4ecd7c:
    // 0x4ecd7c: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ecd7cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4ECD7C raw=0x7265746E");
    // 0x4ecd80: 0x6e657261  ldr         $a1, 0x7261($s3)
    ctx->pc = 0x4ecd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4ecd84: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecd84u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    // 0x4ecd88: 0x0  nop
    ctx->pc = 0x4ecd88u;
    // NOP
    // 0x4ecd8c: 0x0  nop
    ctx->pc = 0x4ecd8cu;
    // NOP
    ctx->pc = 0x4ecd90u;
}
