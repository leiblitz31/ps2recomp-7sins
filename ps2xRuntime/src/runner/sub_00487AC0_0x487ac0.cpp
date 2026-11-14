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

// Function: sub_00487AC0
// Address: 0x487ac0 - 0x487cb0
void sub_00487AC0_0x487ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487AC0_0x487ac0");
#endif

    switch (ctx->pc) {
        case 0x487af0u: goto label_487af0;
        case 0x487b04u: goto label_487b04;
        case 0x487b38u: goto label_487b38;
        case 0x487c10u: goto label_487c10;
        case 0x487c3cu: goto label_487c3c;
        case 0x487c70u: goto label_487c70;
        default: break;
    }

    ctx->pc = 0x487ac0u;

    // 0x487ac0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x487ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x487ac4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x487ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x487ac8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x487ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x487acc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x487accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x487ad0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x487ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x487ad4: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x487ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x487ad8: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x487ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x487adc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x487adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x487ae0: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x487ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x487ae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x487ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487ae8: 0xc0c85a4  jal         func_321690
    ctx->pc = 0x487AE8u;
    SET_GPR_U32(ctx, 31, 0x487AF0u);
    ctx->pc = 0x321690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321690u, 0x487AE8u, 0x487AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487AF0u;
label_487af0:
    // 0x487af0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x487af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487af4: 0x3c06005f  lui         $a2, 0x5F
    ctx->pc = 0x487af4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)95 << 16));
    // 0x487af8: 0x24c63fb0  addiu       $a2, $a2, 0x3FB0
    ctx->pc = 0x487af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16304));
    // 0x487afc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x487afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x487b00: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x487b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_487b04:
    // 0x487b04: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x487b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x487b08: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x487b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x487b0c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x487b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x487b10: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x487b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x487b14: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x487b14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x487b18: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x487b18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x487b1c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x487b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x487b20: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x487B20u;
    {
        const bool branch_taken_0x487b20 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x487b20) {
            ctx->pc = 0x487B04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487b04;
        }
    }
    ctx->pc = 0x487B28u;
    // 0x487b28: 0x3c06005f  lui         $a2, 0x5F
    ctx->pc = 0x487b28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)95 << 16));
    // 0x487b2c: 0x24c63ff0  addiu       $a2, $a2, 0x3FF0
    ctx->pc = 0x487b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16368));
    // 0x487b30: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x487b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x487b34: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x487b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_487b38:
    // 0x487b38: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x487b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x487b3c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x487b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x487b40: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x487b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x487b44: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x487b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x487b48: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x487b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x487b4c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x487b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x487b50: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x487b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x487b54: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x487B54u;
    {
        const bool branch_taken_0x487b54 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x487b54) {
            ctx->pc = 0x487B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487b38;
        }
    }
    ctx->pc = 0x487B5Cu;
    // 0x487b5c: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x487b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x487b60: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x487B60u;
    {
        const bool branch_taken_0x487b60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x487b60) {
            ctx->pc = 0x487B7Cu;
            goto label_487b7c;
        }
    }
    ctx->pc = 0x487B68u;
    // 0x487b68: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x487b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x487b6c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x487b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x487b70: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x487b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x487b74: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x487B74u;
    {
        const bool branch_taken_0x487b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x487b74) {
            ctx->pc = 0x487C8Cu;
            goto label_487c8c;
        }
    }
    ctx->pc = 0x487B7Cu;
label_487b7c:
    // 0x487b7c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x487b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x487b80: 0x1202001c  beq         $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x487B80u;
    {
        const bool branch_taken_0x487b80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x487b80) {
            ctx->pc = 0x487BF4u;
            goto label_487bf4;
        }
    }
    ctx->pc = 0x487B88u;
    // 0x487b88: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x487b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x487b8c: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x487B8Cu;
    {
        const bool branch_taken_0x487b8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x487b8c) {
            ctx->pc = 0x487BF4u;
            goto label_487bf4;
        }
    }
    ctx->pc = 0x487B94u;
    // 0x487b94: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x487b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x487b98: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x487B98u;
    {
        const bool branch_taken_0x487b98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x487b98) {
            ctx->pc = 0x487BF4u;
            goto label_487bf4;
        }
    }
    ctx->pc = 0x487BA0u;
    // 0x487ba0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x487ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x487ba4: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x487BA4u;
    {
        const bool branch_taken_0x487ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x487ba4) {
            ctx->pc = 0x487BF4u;
            goto label_487bf4;
        }
    }
    ctx->pc = 0x487BACu;
    // 0x487bac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x487bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x487bb0: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x487BB0u;
    {
        const bool branch_taken_0x487bb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x487bb0) {
            ctx->pc = 0x487BF4u;
            goto label_487bf4;
        }
    }
    ctx->pc = 0x487BB8u;
    // 0x487bb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x487bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x487bbc: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x487BBCu;
    {
        const bool branch_taken_0x487bbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x487bbc) {
            ctx->pc = 0x487BF4u;
            goto label_487bf4;
        }
    }
    ctx->pc = 0x487BC4u;
    // 0x487bc4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x487bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x487bc8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x487BC8u;
    {
        const bool branch_taken_0x487bc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x487bc8) {
            ctx->pc = 0x487BF4u;
            goto label_487bf4;
        }
    }
    ctx->pc = 0x487BD0u;
    // 0x487bd0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x487bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x487bd4: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x487BD4u;
    {
        const bool branch_taken_0x487bd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x487bd4) {
            ctx->pc = 0x487BF4u;
            goto label_487bf4;
        }
    }
    ctx->pc = 0x487BDCu;
    // 0x487bdc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x487bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x487be0: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x487BE0u;
    {
        const bool branch_taken_0x487be0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x487be0) {
            ctx->pc = 0x487BF4u;
            goto label_487bf4;
        }
    }
    ctx->pc = 0x487BE8u;
    // 0x487be8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x487be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x487bec: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x487BECu;
    {
        const bool branch_taken_0x487bec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x487bec) {
            ctx->pc = 0x487C04u;
            goto label_487c04;
        }
    }
    ctx->pc = 0x487BF4u;
label_487bf4:
    // 0x487bf4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x487bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x487bf8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x487bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x487bfc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x487BFCu;
    {
        const bool branch_taken_0x487bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x487bfc) {
            ctx->pc = 0x487C8Cu;
            goto label_487c8c;
        }
    }
    ctx->pc = 0x487C04u;
label_487c04:
    // 0x487c04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x487c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487c08: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x487C08u;
    {
        const bool branch_taken_0x487c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x487c08) {
            ctx->pc = 0x487C7Cu;
            goto label_487c7c;
        }
    }
    ctx->pc = 0x487C10u;
label_487c10:
    // 0x487c10: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x487c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x487c14: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x487c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x487c18: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x487c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x487c1c: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x487C1Cu;
    {
        const bool branch_taken_0x487c1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x487c1c) {
            ctx->pc = 0x487C44u;
            goto label_487c44;
        }
    }
    ctx->pc = 0x487C24u;
    // 0x487c24: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x487c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x487c28: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x487c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x487c2c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x487c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x487c30: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x487c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x487c34: 0xc0c8560  jal         func_321580
    ctx->pc = 0x487C34u;
    SET_GPR_U32(ctx, 31, 0x487C3Cu);
    ctx->pc = 0x321580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321580u, 0x487C34u, 0x487C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487C3Cu;
label_487c3c:
    // 0x487c3c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x487C3Cu;
    {
        const bool branch_taken_0x487c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x487c3c) {
            ctx->pc = 0x487C8Cu;
            goto label_487c8c;
        }
    }
    ctx->pc = 0x487C44u;
label_487c44:
    // 0x487c44: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x487c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x487c48: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x487c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x487c4c: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x487c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x487c50: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x487C50u;
    {
        const bool branch_taken_0x487c50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x487c50) {
            ctx->pc = 0x487C78u;
            goto label_487c78;
        }
    }
    ctx->pc = 0x487C58u;
    // 0x487c58: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x487c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x487c5c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x487c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x487c60: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x487c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x487c64: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x487c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x487c68: 0xc0c8560  jal         func_321580
    ctx->pc = 0x487C68u;
    SET_GPR_U32(ctx, 31, 0x487C70u);
    ctx->pc = 0x321580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321580u, 0x487C68u, 0x487C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487C70u;
label_487c70:
    // 0x487c70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x487C70u;
    {
        const bool branch_taken_0x487c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x487c70) {
            ctx->pc = 0x487C8Cu;
            goto label_487c8c;
        }
    }
    ctx->pc = 0x487C78u;
label_487c78:
    // 0x487c78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x487c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_487c7c:
    // 0x487c7c: 0x2a22000e  slti        $v0, $s1, 0xE
    ctx->pc = 0x487c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x487c80: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x487C80u;
    {
        const bool branch_taken_0x487c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x487c80) {
            ctx->pc = 0x487C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487c10;
        }
    }
    ctx->pc = 0x487C88u;
    // 0x487c88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x487c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_487c8c:
    // 0x487c8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x487c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x487c90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x487c90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x487c94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x487c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x487c98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x487c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x487c9c: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x487c9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x487ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x487CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x487CA8u;
    // 0x487ca8: 0x0  nop
    ctx->pc = 0x487ca8u;
    // NOP
    // 0x487cac: 0x0  nop
    ctx->pc = 0x487cacu;
    // NOP
    ctx->pc = 0x487cb0u;
}
