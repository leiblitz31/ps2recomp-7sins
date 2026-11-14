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

// Function: sub_004E4E68
// Address: 0x4e4e68 - 0x4e4e80
void sub_004E4E68_0x4e4e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4E68_0x4e4e68");
#endif

    switch (ctx->pc) {
        case 0x4e4e70u: goto label_4e4e70;
        default: break;
    }

    ctx->pc = 0x4e4e68u;

    // 0x4e4e68: 0x73697263  .word       0x73697263                   # INVALID     $k1, $t1, 0x7263 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e4e68u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E4E68 raw=0x73697263");
    // 0x4e4e6c: 0x735f7369  .word       0x735F7369                   # pdivuw      $k0, $ra # 00007000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x4e4e6cu;
    { uint32_t rs0 = GPR_U32(ctx, 26); uint32_t rt0 = GPR_U32(ctx, 31); 
   if (rt0 != 0) { ctx->lo = rs0 / rt0; ctx->hi = rs0 % rt0; } 
   else { ctx->lo = 0xFFFFFFFF; ctx->hi = rs0; } 
   SET_GPR_U32(ctx, 14, ctx->lo); }
label_4e4e70:
    // 0x4e4e70: 0x7865  .word       0x00007865                   # move        $t7, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4e70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e4e74: 0x0  nop
    ctx->pc = 0x4e4e74u;
    // NOP
    // 0x4e4e78: 0x0  nop
    ctx->pc = 0x4e4e78u;
    // NOP
    // 0x4e4e7c: 0x0  nop
    ctx->pc = 0x4e4e7cu;
    // NOP
    ctx->pc = 0x4e4e80u;
}
