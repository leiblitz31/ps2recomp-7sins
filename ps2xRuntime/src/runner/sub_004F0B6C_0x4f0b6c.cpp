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

// Function: sub_004F0B6C
// Address: 0x4f0b6c - 0x4f0c48
void sub_004F0B6C_0x4f0b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0B6C_0x4f0b6c");
#endif

    switch (ctx->pc) {
        case 0x4f0b74u: goto label_4f0b74;
        case 0x4f0b90u: goto label_4f0b90;
        case 0x4f0be4u: goto label_4f0be4;
        case 0x4f0c08u: goto label_4f0c08;
        default: break;
    }

    ctx->pc = 0x4f0b6cu;

    // 0x4f0b6c: 0x30303033  andi        $s0, $at, 0x3033
    ctx->pc = 0x4f0b6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12339);
    // 0x4f0b70: 0x0  nop
    ctx->pc = 0x4f0b70u;
    // NOP
label_4f0b74:
    // 0x4f0b74: 0x65f700  .word       0x0065F700                   # sll         $fp, $a1, 28 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0b74u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 5), 28));
    // 0x4f0b78: 0x0  nop
    ctx->pc = 0x4f0b78u;
    // NOP
    // 0x4f0b7c: 0x0  nop
    ctx->pc = 0x4f0b7cu;
    // NOP
    // 0x4f0b80: 0x0  nop
    ctx->pc = 0x4f0b80u;
    // NOP
    // 0x4f0b84: 0x0  nop
    ctx->pc = 0x4f0b84u;
    // NOP
    // 0x4f0b88: 0x0  nop
    ctx->pc = 0x4f0b88u;
    // NOP
    // 0x4f0b8c: 0x0  nop
    ctx->pc = 0x4f0b8cu;
    // NOP
label_4f0b90:
    // 0x4f0b90: 0x0  nop
    ctx->pc = 0x4f0b90u;
    // NOP
    // 0x4f0b94: 0x0  nop
    ctx->pc = 0x4f0b94u;
    // NOP
    // 0x4f0b98: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0b98u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0b9c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0ba0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0ba4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0ba8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bac: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0bacu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bb0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bb4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bb8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bbc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bc0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bc4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bc8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bcc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0bccu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bd0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bd4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bd8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bdc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0be0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0be0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_4f0be4:
    // 0x4f0be4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0be4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0be8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0be8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bec: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0becu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bf0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bf4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bf8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0bfc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0c00: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0c00u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0c04: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0c04u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_4f0c08:
    // 0x4f0c08: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0c08u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0c0c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0c10: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0c10u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0c14: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0c14u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0c18: 0x0  nop
    ctx->pc = 0x4f0c18u;
    // NOP
    // 0x4f0c1c: 0x0  nop
    ctx->pc = 0x4f0c1cu;
    // NOP
    // 0x4f0c20: 0x0  nop
    ctx->pc = 0x4f0c20u;
    // NOP
    // 0x4f0c24: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0c24u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0c28: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0c28u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0c2c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0c30: 0x5faab8  .word       0x005FAAB8                   # dsll        $s5, $ra, 10 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0c30u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 31) << 10);
    // 0x4f0c34: 0x0  nop
    ctx->pc = 0x4f0c34u;
    // NOP
    // 0x4f0c38: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0c38u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0c3c: 0x0  nop
    ctx->pc = 0x4f0c3cu;
    // NOP
    // 0x4f0c40: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4f0c40u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4f0c44: 0x5facd0  .word       0x005FACD0                   # mfhi        $s5 # 005F04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0c44u;
    SET_GPR_U64(ctx, 21, ctx->hi);
    ctx->pc = 0x4f0c48u;
}
