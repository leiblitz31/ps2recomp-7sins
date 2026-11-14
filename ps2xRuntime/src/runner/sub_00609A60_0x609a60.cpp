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

// Function: sub_00609A60
// Address: 0x609a60 - 0x609c50
void sub_00609A60_0x609a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00609A60_0x609a60");
#endif

    switch (ctx->pc) {
        case 0x609a60u: goto label_609a60;
        case 0x609a64u: goto label_609a64;
        case 0x609a68u: goto label_609a68;
        case 0x609a6cu: goto label_609a6c;
        case 0x609a70u: goto label_609a70;
        case 0x609a74u: goto label_609a74;
        case 0x609a78u: goto label_609a78;
        case 0x609a7cu: goto label_609a7c;
        case 0x609a80u: goto label_609a80;
        case 0x609a84u: goto label_609a84;
        case 0x609a88u: goto label_609a88;
        case 0x609a8cu: goto label_609a8c;
        case 0x609a90u: goto label_609a90;
        case 0x609a94u: goto label_609a94;
        case 0x609a98u: goto label_609a98;
        case 0x609a9cu: goto label_609a9c;
        case 0x609aa0u: goto label_609aa0;
        case 0x609aa4u: goto label_609aa4;
        case 0x609aa8u: goto label_609aa8;
        case 0x609aacu: goto label_609aac;
        case 0x609ab0u: goto label_609ab0;
        case 0x609ab4u: goto label_609ab4;
        case 0x609ab8u: goto label_609ab8;
        case 0x609abcu: goto label_609abc;
        case 0x609ac0u: goto label_609ac0;
        case 0x609ac4u: goto label_609ac4;
        case 0x609ac8u: goto label_609ac8;
        case 0x609accu: goto label_609acc;
        case 0x609ad0u: goto label_609ad0;
        case 0x609ad4u: goto label_609ad4;
        case 0x609ad8u: goto label_609ad8;
        case 0x609adcu: goto label_609adc;
        case 0x609ae0u: goto label_609ae0;
        case 0x609ae4u: goto label_609ae4;
        case 0x609ae8u: goto label_609ae8;
        case 0x609aecu: goto label_609aec;
        case 0x609af0u: goto label_609af0;
        case 0x609af4u: goto label_609af4;
        case 0x609af8u: goto label_609af8;
        case 0x609afcu: goto label_609afc;
        case 0x609b00u: goto label_609b00;
        case 0x609b04u: goto label_609b04;
        case 0x609b08u: goto label_609b08;
        case 0x609b0cu: goto label_609b0c;
        case 0x609b10u: goto label_609b10;
        case 0x609b14u: goto label_609b14;
        case 0x609b18u: goto label_609b18;
        case 0x609b1cu: goto label_609b1c;
        case 0x609b20u: goto label_609b20;
        case 0x609b24u: goto label_609b24;
        case 0x609b28u: goto label_609b28;
        case 0x609b2cu: goto label_609b2c;
        case 0x609b30u: goto label_609b30;
        case 0x609b34u: goto label_609b34;
        case 0x609b38u: goto label_609b38;
        case 0x609b3cu: goto label_609b3c;
        case 0x609b40u: goto label_609b40;
        case 0x609b44u: goto label_609b44;
        case 0x609b48u: goto label_609b48;
        case 0x609b4cu: goto label_609b4c;
        case 0x609b50u: goto label_609b50;
        case 0x609b54u: goto label_609b54;
        case 0x609b58u: goto label_609b58;
        case 0x609b5cu: goto label_609b5c;
        case 0x609b60u: goto label_609b60;
        case 0x609b64u: goto label_609b64;
        case 0x609b68u: goto label_609b68;
        case 0x609b6cu: goto label_609b6c;
        case 0x609b70u: goto label_609b70;
        case 0x609b74u: goto label_609b74;
        case 0x609b78u: goto label_609b78;
        case 0x609b7cu: goto label_609b7c;
        case 0x609b80u: goto label_609b80;
        case 0x609b84u: goto label_609b84;
        case 0x609b88u: goto label_609b88;
        case 0x609b8cu: goto label_609b8c;
        case 0x609b90u: goto label_609b90;
        case 0x609b94u: goto label_609b94;
        case 0x609b98u: goto label_609b98;
        case 0x609b9cu: goto label_609b9c;
        case 0x609ba0u: goto label_609ba0;
        case 0x609ba4u: goto label_609ba4;
        case 0x609ba8u: goto label_609ba8;
        case 0x609bacu: goto label_609bac;
        case 0x609bb0u: goto label_609bb0;
        case 0x609bb4u: goto label_609bb4;
        case 0x609bb8u: goto label_609bb8;
        case 0x609bbcu: goto label_609bbc;
        case 0x609bc0u: goto label_609bc0;
        case 0x609bc4u: goto label_609bc4;
        case 0x609bc8u: goto label_609bc8;
        case 0x609bccu: goto label_609bcc;
        case 0x609bd0u: goto label_609bd0;
        case 0x609bd4u: goto label_609bd4;
        case 0x609bd8u: goto label_609bd8;
        case 0x609bdcu: goto label_609bdc;
        case 0x609be0u: goto label_609be0;
        case 0x609be4u: goto label_609be4;
        case 0x609be8u: goto label_609be8;
        case 0x609becu: goto label_609bec;
        case 0x609bf0u: goto label_609bf0;
        case 0x609bf4u: goto label_609bf4;
        case 0x609bf8u: goto label_609bf8;
        case 0x609bfcu: goto label_609bfc;
        case 0x609c00u: goto label_609c00;
        case 0x609c04u: goto label_609c04;
        case 0x609c08u: goto label_609c08;
        case 0x609c0cu: goto label_609c0c;
        case 0x609c10u: goto label_609c10;
        case 0x609c14u: goto label_609c14;
        case 0x609c18u: goto label_609c18;
        case 0x609c1cu: goto label_609c1c;
        case 0x609c20u: goto label_609c20;
        case 0x609c24u: goto label_609c24;
        case 0x609c28u: goto label_609c28;
        case 0x609c2cu: goto label_609c2c;
        case 0x609c30u: goto label_609c30;
        case 0x609c34u: goto label_609c34;
        case 0x609c38u: goto label_609c38;
        case 0x609c3cu: goto label_609c3c;
        case 0x609c40u: goto label_609c40;
        case 0x609c44u: goto label_609c44;
        case 0x609c48u: goto label_609c48;
        case 0x609c4cu: goto label_609c4c;
        default: break;
    }

    ctx->pc = 0x609a60u;

label_609a60:
    // 0x609a60: 0xa646e65  j           func_991B994
label_609a64:
    if (ctx->pc == 0x609A64u) {
        ctx->pc = 0x609A68u;
        goto label_609a68;
    }
    ctx->pc = 0x609A60u;
    ctx->pc = 0x991B994u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x991B994u, 0x609A60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x609A68u;
label_609a68:
    // 0x609a68: 0x8  jr          $zero
label_609a6c:
    if (ctx->pc == 0x609A6Cu) {
        ctx->pc = 0x609A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x609A68u;
        // 0x609a6c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609A6C raw=0x00000001");
        ctx->in_delay_slot = false;
        ctx->pc = 0x609A70u;
        goto label_609a70;
    }
    ctx->pc = 0x609A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x609A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x609A68u;
        // 0x609a6c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609A6C raw=0x00000001");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x609A68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x609A70u;
label_609a70:
    // 0x609a70: 0x10  mfhi        $zero
    ctx->pc = 0x609a70u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_609a74:
    // 0x609a74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609a74u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609A74 raw=0x00000001");
label_609a78:
    // 0x609a78: 0x746e6f66  .word       0x746E6F66                   # INVALID     $v1, $t6, 0x6F66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609a78u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x609A78 raw=0x746E6F66");
label_609a7c:
    // 0x609a7c: 0x5c73  tltu        $zero, $zero, 369
    ctx->pc = 0x609a7cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609a80:
    // 0x609a80: 0x74656d2e  .word       0x74656D2E                   # INVALID     $v1, $a1, 0x6D2E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609a80u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x609A80 raw=0x74656D2E");
label_609a84:
    // 0x609a84: 0x0  nop
    ctx->pc = 0x609a84u;
    // NOP
label_609a88:
    // 0x609a88: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x609a88u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609a8c:
    // 0x609a8c: 0x0  nop
    ctx->pc = 0x609a8cu;
    // NOP
label_609a90:
    // 0x609a90: 0x0  nop
    ctx->pc = 0x609a90u;
    // NOP
label_609a94:
    // 0x609a94: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x609a94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_609a98:
    // 0x609a98: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609a98u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609A98 raw=0x00000001");
label_609a9c:
    // 0x609a9c: 0x0  nop
    ctx->pc = 0x609a9cu;
    // NOP
label_609aa0:
    // 0x609aa0: 0x0  nop
    ctx->pc = 0x609aa0u;
    // NOP
label_609aa4:
    // 0x609aa4: 0x0  nop
    ctx->pc = 0x609aa4u;
    // NOP
label_609aa8:
    // 0x609aa8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x609aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_609aac:
    // 0x609aac: 0x0  nop
    ctx->pc = 0x609aacu;
    // NOP
label_609ab0:
    // 0x609ab0: 0x0  nop
    ctx->pc = 0x609ab0u;
    // NOP
label_609ab4:
    // 0x609ab4: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x609ab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_609ab8:
    // 0x609ab8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609ab8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609AB8 raw=0x00000001");
label_609abc:
    // 0x609abc: 0x0  nop
    ctx->pc = 0x609abcu;
    // NOP
label_609ac0:
    // 0x609ac0: 0x0  nop
    ctx->pc = 0x609ac0u;
    // NOP
label_609ac4:
    // 0x609ac4: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x609ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_609ac8:
    // 0x609ac8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609ac8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609AC8 raw=0x00000001");
label_609acc:
    // 0x609acc: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x609accu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_609ad0:
    // 0x609ad0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609ad0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609AD0 raw=0x00000001");
label_609ad4:
    // 0x609ad4: 0x0  nop
    ctx->pc = 0x609ad4u;
    // NOP
label_609ad8:
    // 0x609ad8: 0x0  nop
    ctx->pc = 0x609ad8u;
    // NOP
label_609adc:
    // 0x609adc: 0x0  nop
    ctx->pc = 0x609adcu;
    // NOP
label_609ae0:
    // 0x609ae0: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x609ae0u;
    
label_609ae4:
    // 0x609ae4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609ae4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609AE4 raw=0x00000001");
label_609ae8:
    // 0x609ae8: 0x0  nop
    ctx->pc = 0x609ae8u;
    // NOP
label_609aec:
    // 0x609aec: 0x0  nop
    ctx->pc = 0x609aecu;
    // NOP
label_609af0:
    // 0x609af0: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x609af0u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_609af4:
    // 0x609af4: 0x0  nop
    ctx->pc = 0x609af4u;
    // NOP
label_609af8:
    // 0x609af8: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609af8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_609afc:
    // 0x609afc: 0x0  nop
    ctx->pc = 0x609afcu;
    // NOP
label_609b00:
    // 0x609b00: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x609b00u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609b04:
    // 0x609b04: 0x0  nop
    ctx->pc = 0x609b04u;
    // NOP
label_609b08:
    // 0x609b08: 0x77  .word       0x00000077                   # INVALID     $zero, $zero, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609b08u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x609B08 raw=0x00000077");
label_609b0c:
    // 0x609b0c: 0x0  nop
    ctx->pc = 0x609b0cu;
    // NOP
label_609b10:
    // 0x609b10: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609b10u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_609b14:
    // 0x609b14: 0x0  nop
    ctx->pc = 0x609b14u;
    // NOP
label_609b18:
    // 0x609b18: 0x0  nop
    ctx->pc = 0x609b18u;
    // NOP
label_609b1c:
    // 0x609b1c: 0x0  nop
    ctx->pc = 0x609b1cu;
    // NOP
label_609b20:
    // 0x609b20: 0x74736f68  .word       0x74736F68                   # INVALID     $v1, $s3, 0x6F68 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609b20u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x609B20 raw=0x74736F68");
label_609b24:
    // 0x609b24: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x609b24u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_609b28:
    // 0x609b28: 0x0  nop
    ctx->pc = 0x609b28u;
    // NOP
label_609b2c:
    // 0x609b2c: 0x0  nop
    ctx->pc = 0x609b2cu;
    // NOP
label_609b30:
    // 0x609b30: 0x0  nop
    ctx->pc = 0x609b30u;
    // NOP
label_609b34:
    // 0x609b34: 0x0  nop
    ctx->pc = 0x609b34u;
    // NOP
label_609b38:
    // 0x609b38: 0x0  nop
    ctx->pc = 0x609b38u;
    // NOP
label_609b3c:
    // 0x609b3c: 0x0  nop
    ctx->pc = 0x609b3cu;
    // NOP
label_609b40:
    // 0x609b40: 0x201  .word       0x00000201                   # INVALID     $zero, $zero, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609b40u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609B40 raw=0x00000201");
label_609b44:
    // 0x609b44: 0x0  nop
    ctx->pc = 0x609b44u;
    // NOP
label_609b48:
    // 0x609b48: 0x0  nop
    ctx->pc = 0x609b48u;
    // NOP
label_609b4c:
    // 0x609b4c: 0x0  nop
    ctx->pc = 0x609b4cu;
    // NOP
label_609b50:
    // 0x609b50: 0x20100  sll         $zero, $v0, 4
    ctx->pc = 0x609b50u;
    
label_609b54:
    // 0x609b54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609b54u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609B54 raw=0x00000001");
label_609b58:
    // 0x609b58: 0x0  nop
    ctx->pc = 0x609b58u;
    // NOP
label_609b5c:
    // 0x609b5c: 0x0  nop
    ctx->pc = 0x609b5cu;
    // NOP
label_609b60:
    // 0x609b60: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x609b60u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609b64:
    // 0x609b64: 0x0  nop
    ctx->pc = 0x609b64u;
    // NOP
label_609b68:
    // 0x609b68: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609b68u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_609b6c:
    // 0x609b6c: 0x0  nop
    ctx->pc = 0x609b6cu;
    // NOP
label_609b70:
    // 0x609b70: 0x2e312e31  sltiu       $s1, $s1, 0x2E31
    ctx->pc = 0x609b70u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11825) ? 1 : 0);
label_609b74:
    // 0x609b74: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x609b74u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609b78:
    // 0x609b78: 0x609b70  tge         $v1, $zero, 621
    ctx->pc = 0x609b78u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609b7c:
    // 0x609b7c: 0x0  nop
    ctx->pc = 0x609b7cu;
    // NOP
label_609b80:
    // 0x609b80: 0x0  nop
    ctx->pc = 0x609b80u;
    // NOP
label_609b84:
    // 0x609b84: 0x0  nop
    ctx->pc = 0x609b84u;
    // NOP
label_609b88:
    // 0x609b88: 0x2e312e31  sltiu       $s1, $s1, 0x2E31
    ctx->pc = 0x609b88u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11825) ? 1 : 0);
label_609b8c:
    // 0x609b8c: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x609b8cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609b90:
    // 0x609b90: 0xffff0000  sd          $ra, 0x0($ra)
    ctx->pc = 0x609b90u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 0), GPR_U64(ctx, 31));
label_609b94:
    // 0x609b94: 0x9  jalr        $zero, $zero
label_609b98:
    if (ctx->pc == 0x609B98u) {
        ctx->pc = 0x609B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x609B94u;
        // 0x609b98: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x609B98 raw=0x00000005");
        ctx->in_delay_slot = false;
        ctx->pc = 0x609B9Cu;
        goto label_609b9c;
    }
    ctx->pc = 0x609B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x609B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x609B94u;
        // 0x609b98: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x609B98 raw=0x00000005");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x609B94u, 0x609B9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x609B9Cu;
label_609b9c:
    // 0x609b9c: 0x0  nop
    ctx->pc = 0x609b9cu;
    // NOP
label_609ba0:
    // 0x609ba0: 0x474e5089  .word       0x474E5089                   # INVALID     $k0, $t6, 0x5089 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x609ba0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x9 at 0x609BA0 raw=0x474E5089");
label_609ba4:
    // 0x609ba4: 0xa1a0a0d  j           func_8682834
label_609ba8:
    if (ctx->pc == 0x609BA8u) {
        ctx->pc = 0x609BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x609BA4u;
        // 0x609ba8: 0x52444849  beql        $s2, $a0, . + 4 + (0x4849 << 2) (Delay Slot)
        // Likely branch instruction at 0x609BA8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x609BACu;
        goto label_609bac;
    }
    ctx->pc = 0x609BA4u;
    ctx->pc = 0x609BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x609BA4u;
    // 0x609ba8: 0x52444849  beql        $s2, $a0, . + 4 + (0x4849 << 2) (Delay Slot)
    // Likely branch instruction at 0x609BA8 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8682834u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8682834u, 0x609BA4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x609BACu;
label_609bac:
    // 0x609bac: 0x0  nop
    ctx->pc = 0x609bacu;
    // NOP
label_609bb0:
    // 0x609bb0: 0x54414449  bnel        $v0, $at, . + 4 + (0x4449 << 2)
label_609bb4:
    if (ctx->pc == 0x609BB4u) {
        ctx->pc = 0x609BB8u;
        goto label_609bb8;
    }
    ctx->pc = 0x609BB0u;
    {
        const bool branch_taken_0x609bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 1));
        if (branch_taken_0x609bb0) {
            ctx->pc = 0x61ACD8u;
            return;
        }
    }
    ctx->pc = 0x609BB8u;
label_609bb8:
    // 0x609bb8: 0x444e4549  .word       0x444E4549                   # cfc1        $t6, $8 # 00000549 <InstrIdType: R5900_COP1>
    ctx->pc = 0x609bb8u;
    SET_GPR_U32(ctx, 14, 0); // Unimplemented FCR8
label_609bbc:
    // 0x609bbc: 0x0  nop
    ctx->pc = 0x609bbcu;
    // NOP
label_609bc0:
    // 0x609bc0: 0x45544c50  .word       0x45544C50                   # INVALID     $t2, $s4, 0x4C50 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x609bc0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x10 at 0x609BC0 raw=0x45544C50");
label_609bc4:
    // 0x609bc4: 0x0  nop
    ctx->pc = 0x609bc4u;
    // NOP
label_609bc8:
    // 0x609bc8: 0x44474b62  .word       0x44474B62                   # cfc1        $a3, $9 # 00000362 <InstrIdType: R5900_COP1>
    ctx->pc = 0x609bc8u;
    SET_GPR_U32(ctx, 7, 0); // Unimplemented FCR9
label_609bcc:
    // 0x609bcc: 0x0  nop
    ctx->pc = 0x609bccu;
    // NOP
label_609bd0:
    // 0x609bd0: 0x4d524863  .word       0x4D524863                   # INVALID     $t2, $s2, 0x4863 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609bd0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x609BD0 raw=0x4D524863");
label_609bd4:
    // 0x609bd4: 0x0  nop
    ctx->pc = 0x609bd4u;
    // NOP
label_609bd8:
    // 0x609bd8: 0x414d4167  .word       0x414D4167                   # INVALID     $t2, $t5, 0x4167 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x609bd8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x609BD8 raw=0x414D4167");
label_609bdc:
    // 0x609bdc: 0x0  nop
    ctx->pc = 0x609bdcu;
    // NOP
label_609be0:
    // 0x609be0: 0x54534968  bnel        $v0, $s3, . + 4 + (0x4968 << 2)
label_609be4:
    if (ctx->pc == 0x609BE4u) {
        ctx->pc = 0x609BE8u;
        goto label_609be8;
    }
    ctx->pc = 0x609BE0u;
    {
        const bool branch_taken_0x609be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x609be0) {
            ctx->pc = 0x61C184u;
            return;
        }
    }
    ctx->pc = 0x609BE8u;
label_609be8:
    // 0x609be8: 0x50434369  beql        $v0, $v1, . + 4 + (0x4369 << 2)
label_609bec:
    if (ctx->pc == 0x609BECu) {
        ctx->pc = 0x609BF0u;
        goto label_609bf0;
    }
    ctx->pc = 0x609BE8u;
    {
        const bool branch_taken_0x609be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x609be8) {
            ctx->pc = 0x61A990u;
            return;
        }
    }
    ctx->pc = 0x609BF0u;
label_609bf0:
    // 0x609bf0: 0x74585469  .word       0x74585469                   # INVALID     $v0, $t8, 0x5469 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609bf0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x609BF0 raw=0x74585469");
label_609bf4:
    // 0x609bf4: 0x0  nop
    ctx->pc = 0x609bf4u;
    // NOP
label_609bf8:
    // 0x609bf8: 0x7346466f  .word       0x7346466F                   # INVALID     $k0, $a2, 0x466F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x609bf8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x609BF8 raw=0x7346466F");
label_609bfc:
    // 0x609bfc: 0x0  nop
    ctx->pc = 0x609bfcu;
    // NOP
label_609c00:
    // 0x609c00: 0x4c414370  .word       0x4C414370                   # INVALID     $v0, $at, 0x4370 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609c00u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x609C00 raw=0x4C414370");
label_609c04:
    // 0x609c04: 0x0  nop
    ctx->pc = 0x609c04u;
    // NOP
label_609c08:
    // 0x609c08: 0x4c414373  .word       0x4C414373                   # INVALID     $v0, $at, 0x4373 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609c08u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x609C08 raw=0x4C414373");
label_609c0c:
    // 0x609c0c: 0x0  nop
    ctx->pc = 0x609c0cu;
    // NOP
label_609c10:
    // 0x609c10: 0x73594870  .word       0x73594870                   # pmfhl.uw    $t1 # 03590000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x609c10u;
    SET_GPR_VEC(ctx, 9, PS2_PMFHL_UW(ctx->hi, ctx->lo));
label_609c14:
    // 0x609c14: 0x0  nop
    ctx->pc = 0x609c14u;
    // NOP
label_609c18:
    // 0x609c18: 0x54494273  bnel        $v0, $t1, . + 4 + (0x4273 << 2)
label_609c1c:
    if (ctx->pc == 0x609C1Cu) {
        ctx->pc = 0x609C20u;
        goto label_609c20;
    }
    ctx->pc = 0x609C18u;
    {
        const bool branch_taken_0x609c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x609c18) {
            ctx->pc = 0x61A5E8u;
            return;
        }
    }
    ctx->pc = 0x609C20u;
label_609c20:
    // 0x609c20: 0x544c5073  bnel        $v0, $t4, . + 4 + (0x5073 << 2)
label_609c24:
    if (ctx->pc == 0x609C24u) {
        ctx->pc = 0x609C28u;
        goto label_609c28;
    }
    ctx->pc = 0x609C20u;
    {
        const bool branch_taken_0x609c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x609c20) {
            ctx->pc = 0x61DDF0u;
            return;
        }
    }
    ctx->pc = 0x609C28u;
label_609c28:
    // 0x609c28: 0x42475273  .word       0x42475273                   # INVALID     $s2, $a3, 0x5273 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x609c28u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x609C28 raw=0x42475273");
label_609c2c:
    // 0x609c2c: 0x0  nop
    ctx->pc = 0x609c2cu;
    // NOP
label_609c30:
    // 0x609c30: 0x74584574  .word       0x74584574                   # INVALID     $v0, $t8, 0x4574 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609c30u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x609C30 raw=0x74584574");
label_609c34:
    // 0x609c34: 0x0  nop
    ctx->pc = 0x609c34u;
    // NOP
label_609c38:
    // 0x609c38: 0x454d4974  .word       0x454D4974                   # INVALID     $t2, $t5, 0x4974 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x609c38u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x34 at 0x609C38 raw=0x454D4974");
label_609c3c:
    // 0x609c3c: 0x0  nop
    ctx->pc = 0x609c3cu;
    // NOP
label_609c40:
    // 0x609c40: 0x534e5274  beql        $k0, $t6, . + 4 + (0x5274 << 2)
label_609c44:
    if (ctx->pc == 0x609C44u) {
        ctx->pc = 0x609C48u;
        goto label_609c48;
    }
    ctx->pc = 0x609C40u;
    {
        const bool branch_taken_0x609c40 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 14));
        if (branch_taken_0x609c40) {
            ctx->pc = 0x61E614u;
            return;
        }
    }
    ctx->pc = 0x609C48u;
label_609c48:
    // 0x609c48: 0x7458547a  .word       0x7458547A                   # INVALID     $v0, $t8, 0x547A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609c48u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x609C48 raw=0x7458547A");
label_609c4c:
    // 0x609c4c: 0x0  nop
    ctx->pc = 0x609c4cu;
    // NOP
    ctx->pc = 0x609c50u;
}
