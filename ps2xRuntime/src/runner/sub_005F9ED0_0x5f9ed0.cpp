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

// Function: sub_005F9ED0
// Address: 0x5f9ed0 - 0x5f9ef0
void sub_005F9ED0_0x5f9ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005F9ED0_0x5f9ed0");
#endif

    ctx->pc = 0x5f9ed0u;

    // 0x5f9ed0: 0x44656373  .word       0x44656373                   # INVALID     $v1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f9ed0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x33 at 0x5F9ED0 raw=0x44656373");
    // 0x5f9ed4: 0x65526362  daddiu      $s2, $t2, 0x6362
    ctx->pc = 0x5f9ed4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25442);
    // 0x5f9ed8: 0x76696563  .word       0x76696563                   # INVALID     $s3, $t1, 0x6563 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f9ed8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F9ED8 raw=0x76696563");
    // 0x5f9edc: 0x74614465  .word       0x74614465                   # INVALID     $v1, $at, 0x4465 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f9edcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F9EDC raw=0x74614465");
    // 0x5f9ee0: 0x72203a61  .word       0x72203A61                   # maddu1      $a3, $s1, $zero # 00000240 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f9ee0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 17) * (uint64_t)GPR_U32(ctx, 0); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x5f9ee4: 0x65206370  daddiu      $zero, $t1, 0x6370
    ctx->pc = 0x5f9ee4u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)25456);
    // 0x5f9ee8: 0x726f7272  .word       0x726F7272                   # INVALID     $s3, $t7, 0x7272 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f9ee8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5F9EE8 raw=0x726F7272");
    // 0x5f9eec: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5f9eecu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->pc = 0x5f9ef0u;
}
